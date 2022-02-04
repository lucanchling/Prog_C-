
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


/*
int main()
{
    std::list<std::string> Liste = {"Bonjour","Salut","Alors"};
    char Chgmt = 'z';
    for (auto& value : Liste){
        value[1] = Chgmt;
        std::cout<<value<<std::endl;
    }
    return 0;
}
*/

// FOnction 
void affiche(std::vector<std::string> const& v){
    for(auto mot : v){std::cout<<mot<<" ";}std::cout<<std::endl;
}

std::string concatene(std::vector<std::string> const& v){
    std::string ret;
    for (auto mot : v){ret+=" "+mot;};
    return ret;
}

std::vector<std::string> ajoute_virgule(std::vector<std::string>& v){
    for(auto& mot : v){
        mot+=", ";
    }
    return v;
}


int main()
{
    std::vector<std::string> mon_vecteur = {"Bonjour", "comment", "allez", "vous", "?"};
    
    std::cout<<"Taille du vecteur : "<<mon_vecteur.size()<<std::endl;
    std::cout<<"Taille de la capacité (espace mémoire alloué) : "<<mon_vecteur.capacity()<<std::endl;
    
    mon_vecteur.push_back("Merciiiiii");
    
    std::cout<<"Taille du vecteur : "<<mon_vecteur.size()<<std::endl;
    std::cout<<"Taille de la capacité (espace mémoire alloué) : "<<mon_vecteur.capacity()<<std::endl;
    
    // version Luc --> éclaté au sol
    //for(auto mot : mon_vecteur){std::cout<<mot<<" ";}std::cout<<std::endl;

    // version itérateur
    std::vector<std::string>::iterator it=mon_vecteur.begin(),
                               it_end=mon_vecteur.end();
    for(;it!=it_end;++it){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
    
    // Echange de valeurs
    std::swap(mon_vecteur[1],mon_vecteur[2]);
    
    // version Luc --> éclaté au sol
    //for(auto mot : mon_vecteur){std::cout<<mot<<" ";}std::cout<<std::endl;
    
    // Ajout de valeur    
    mon_vecteur.insert(it-5,"a tous"); 
   
    //for(auto mot : mon_vecteur){std::cout<<mot<<" ";}std::cout<<std::endl;
    
    // Remplacement de valeur
    mon_vecteur[5]="???";
    //for(auto mot : mon_vecteur){std::cout<<mot<<" ";}std::cout<<std::endl;
    
    // Affichage avec virgule
    //for(auto mot : mon_vecteur){std::cout<<mot<<", ";}std::cout<<std::endl;
    
    // Tri du vecteur avec sort
    std::sort(mon_vecteur.begin(),mon_vecteur.end());
    //for(auto mot : mon_vecteur){std::cout<<mot<<" ";}std::cout<<std::endl;
    
    // Fonction affichage
    affiche(mon_vecteur);
    
    // Fonction concatene
    std::cout<<concatene(mon_vecteur)<<std::endl;
    
    mon_vecteur = {"Bonjour", "comment", "allez", "vous", "?"};
    affiche(ajoute_virgule(mon_vecteur));
    
}
