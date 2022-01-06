#ifndef Zoo_H_INCLUDED
#define Zoo_H_INCLUDED
#pragma once
#include <iostream>
#include <vector>
#include "Animal.h"
#include "Lion.h"
#include "Medecin.h"
using namespace std;
class Zoo
{
private :
vector<Animal*> tabAnimaux;
vector<Medecin> tabMedecin;


public :
 ~Zoo();
Zoo(){};
Zoo( const Zoo &);
Zoo& operator=( const Zoo &);
bool Ajouter ( const Animal & ) ;
bool Ajouter ( const Lion & ) ;
vector<Animal*> :: iterator getMatricule(int matricule);
bool AjoutVaccin ( int matricule , string date  );

vector<Medecin> :: iterator getMedecin ( int IDm );

bool AjouterMedecin ( const Medecin &);
bool AffecterAnimal ( int  , Medecin );

void AfficherAnimalMedecin (const Medecin );


};
#endif