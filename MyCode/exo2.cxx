#include <iostream>
#include <string>
#include <list>

struct personne
{
	std::string nom;
	std::string prenom;

	personne() : nom("inconnu"),prenom("inconnu"){}
	personne(std::string name, std::string firstname) : nom(name),prenom(firstname){} 
};

struct etudiant : public personne
{
	int note;

	etudiant() : personne(){};

	etudiant(std::string name, std::string firstname) : personne(name,firstname){};

	etudiant(std::string name, std::string firstname,int note) : personne(name,firstname)
	{
        note = note;
        
	};

};


void denomer(personne p)
{
    std::cout<<p.nom<<" "<<p.prenom<<std::endl;
};

int main()
{
    etudiant A("Franck","Ribery",2);
    etudiant B("Einstein","Albert",18);
    personne C("Huster","Francis");
    
    std::list<personne> L;
    L.push_back(A);
    L.push_front(B);
    L.push_front(C);
    
    for(personne p : L)
    denomer(p);
    return 0;
};
