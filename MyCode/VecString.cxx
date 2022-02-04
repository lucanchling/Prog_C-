
#include <iostream>
#include <vector>
#include <list>



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

int main()
{
    std::vector<std::string> mon_vecteur = {"Bonjour", "comment", "allez", "vous", "?"};
    
    std::cout<<"Taille du vecteur : "<<mon_vecteur.size()<<std::endl;
    std::cout<<"Taille de la capacité (espace mémoire alloué) : "<<mon_vecteur.capacity()<<std::endl;
    
    mon_vecteur.push_back("Merciiiiii");
    
    std::cout<<"Taille du vecteur : "<<mon_vecteur.size()<<std::endl;
    std::cout<<"Taille de la capacité (espace mémoire alloué) : "<<mon_vecteur.capacity()<<std::endl;
    
    // version Luc --> éclaté au sol
    for(auto mot : mon_vecteur){
        std::cout<<mot<<" ";
    }
    std::cout<<std::endl;

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
    for(auto mot : mon_vecteur){
        std::cout<<mot<<" ";
    }
    std::cout<<std::endl;
    
    // Ajout de valeur
    
    
}
