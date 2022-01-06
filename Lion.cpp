#include "Lion.h"
Lion::Lion ()
{
this->Qunatite_viande = 0;

}
Lion::Lion(string  espece ,int  matricule ,float  Qunatite_viande ) : Animal(espece ,matricule)
{
this->Qunatite_viande = Qunatite_viande ;
}
Lion::~Lion()
{}
void Lion::Afficher()
{
Animal::Afficher() ;
cout << "Qunatite_viande = "<<Qunatite_viande<<endl ;
}
istream & operator>> (istream &  in ,Lion & L)
{

Animal X;
cin >> X ;
L.setespece(X.getespece());
L.setmatricule(X.getmatricule());
cout << "Qunatite_viande = ";
in >>L.Qunatite_viande;
return in ;
}
ostream & operator<< (ostream &  out ,Lion & L)
{

Animal X;
cout << X ;
cout << "Qunatite_viande = ";
out <<L.Qunatite_viande<<endl;
return out ;
}