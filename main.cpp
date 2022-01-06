#include <iostream>
#include "Zoo.h"
#include "Animal.h"
#include "Lion.h"
#include "Medecin.h"

using namespace std ; 

int main ()
{

Animal A1("carnivor" , 1234);
Animal A2("herbivor" , 2233) ;

Lion L1("carnivor" , 5568 , 122.3);
Lion L2("carnivor" , 1234 , 122.3);

Medecin M1(1234,"farouk","chalg");
Medecin M2(1225,"farouk","chalg");
Medecin M3(1234,"farouk","chalg");
Medecin M4(1255,"farouk","chalg");
Medecin M5(5855,"farouk","chalg");

Zoo Z ; 

cout << "Ajout 1 = " <<Z.Ajouter(A1)<<endl;
cout << "Ajout 2 = " <<Z.Ajouter(A2)<<endl;
cout << "Ajout 3 = " <<Z.Ajouter(L1)<<endl;
cout << "Ajout 4 = " <<Z.Ajouter(L2)<<endl;

cout << "Ajout Medecin 1 = " <<Z.AjouterMedecin(M1)<<endl;
cout << "Ajout Medecin 2 = " <<Z.AjouterMedecin(M2)<<endl;
cout << "Ajout Medecin 3 = " <<Z.AjouterMedecin(M3)<<endl;
cout << "Ajout Medecin 4 = " <<Z.AjouterMedecin(M4)<<endl;

cout << "Ajout Vaccin 1 = " <<Z.AjoutVaccin(1234 , "06/01/2022")<<endl;
cout << "Ajout Vaccin 2 = " <<Z.AjoutVaccin(0034, "06/01/2022")<<endl;
cout << "Ajout Vaccin 3 = " <<Z.AjoutVaccin(5568, "06/01/2022")<<endl;

cout << "Ajout Vaccin 4 = " <<Z.AjoutVaccin(1234, "06/01/2022")<<endl;

cout << "Ajout Vaccin 5 = " <<Z.AjoutVaccin(1234, "06/01/2022")<<endl;

Z.AffecterAnimal(1234,M1);
Z.AffecterAnimal(1234,M2);
Z.AffecterAnimal(5568,M1);
Z.AffecterAnimal(2233,M1);
Z.AffecterAnimal(1168,M5);

Z.AfficherAnimalMedecin(M1);
Z.AfficherAnimalMedecin(M2);







    return 0 ; 
}