
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <map>

void affiche(std::map<int,std::string>& map){
    for(auto it = map.begin(); it != map.end();it++){
        std::cout << "{" << (*it).first << "," << (*it).second <<"}" <<std::endl;
    }
}

void ajout_evenement(std::map<int,std::string>& map, int year,std::string event){
    map.insert(std::make_pair(year,event)); 
}


int main(){
    std::map<int,std::string> My_map;

    ajout_evenement(My_map,1994,"Creation de cpe");
    ajout_evenement(My_map,1964,"Naissance de Ségolène Roya");
    ajout_evenement(My_map,1953,"Naissance de John Malkovich");
    ajout_evenement(My_map,1951,"Mort d’Ayrton Senna");
    ajout_evenement(My_map,1515,"Naissance de José Bové");

    affiche(My_map);
    return 0;
}
