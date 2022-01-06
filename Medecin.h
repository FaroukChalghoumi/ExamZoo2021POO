#ifndef Medecin_H_INCLUDED
#define Medecin_H_INCLUDED
#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Medecin
{
protected :
int  ID;
string  nom;
string  prenom;


public :
vector <int> Matricule_Actif;

Medecin ();
Medecin (int  ID ,string  nom ,string  prenom ) ;
~Medecin () ;
int getID () const{ return ID ; }
string getnom () const{ return nom ; }
string getprenom () const{ return prenom ; }
void setID (int ID ) { this->ID = ID; }
void setnom (string nom ) { this->nom = nom; }
void setprenom (string prenom ) { this->prenom = prenom; }
virtual void afficherM() ;


bool AjoutMatriculeMedecin ( int matricule );
;

friend istream & operator>> (istream &  in ,Medecin & M);

friend ostream & operator<< (ostream &  out ,Medecin & M);

//friend Medecin operator ( const Medecin & M);
};
#endif
istream & operator>> (istream &  in ,Medecin & M);

ostream & operator<< (ostream &  out ,Medecin & M);