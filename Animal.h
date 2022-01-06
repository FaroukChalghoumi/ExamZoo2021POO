#ifndef Animal_H_INCLUDED
#define Animal_H_INCLUDED
#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Animal
{
protected :
string  espece;
int  matricule;
vector <string> dateVaccin ; 
public :
Animal ();
Animal (string  espece ,int  matricule ) ;
~Animal () ;
string getespece () const{ return espece ; }
int getmatricule () const{ return matricule ; }
void setespece (string espece ) { this->espece = espece; }
void setmatricule (int matricule ) { this->matricule = matricule; }
virtual void Afficher() ;

virtual bool PushDateVaccin (string); 

friend istream & operator>> (istream &  in ,Animal & A);

friend ostream & operator<< (ostream &  out ,Animal & A);

//friend Animal operator ( const Animal & A);
};
#endif
istream & operator>> (istream &  in ,Animal & A);

ostream & operator<< (ostream &  out ,Animal & A);