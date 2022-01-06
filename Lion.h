#ifndef Lion_H_INCLUDED
#define Lion_H_INCLUDED
#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;
class Lion : public Animal
{
private :
float  Qunatite_viande;
public :
Lion () ;Lion (string  espece ,int  matricule ,float  Qunatite_viande ) ;
~Lion () ;
float getQunatite_viande () const{ return Qunatite_viande ; }
void setQunatite_viande (float Qunatite_viande ) { this->Qunatite_viande = Qunatite_viande; }
void Afficher() ;


friend istream & operator>> (istream &  in ,Lion & L);

friend ostream & operator<< (ostream &  in ,Lion & L);

//friend Lion operator ( const Lion & L);
};
#endif
istream & operator>> (istream &  in ,Lion & L);
ostream & operator<< (ostream &  in ,Lion & L);