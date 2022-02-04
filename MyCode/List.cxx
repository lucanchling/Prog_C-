
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


void affiche(std::list<int> & liste){
    for(auto val : liste){std::cout<<val<<" ";}std::cout<<std::endl;
}
int main() {
    std::list<int> Liste = {1,5,3,15,23,5,31,974};
    affiche(Liste);
    
    std::list<int>::iterator it=Liste.begin();
    advance(it,2);
    Liste.erase(it);
    affiche(Liste);
    return 0;
}
