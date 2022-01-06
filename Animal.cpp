#include "Animal.h"
Animal::Animal ()
{
this->espece =  " " ; 
this->matricule = 0 ; 

}
Animal::Animal(string  espece ,int  matricule )
{
this->espece = espece ;
this->matricule = matricule ;
}
Animal::~Animal()
{}
void Animal::Afficher()
{
cout << "espece = "<<espece<<endl ;
cout << "matricule = "<<matricule<<endl ;
}
istream & operator>> (istream &  in ,Animal & A)
{

cout << "espece = ";
in >>A.espece;
cout << "matricule = ";
in >>A.matricule;
return in ;
}
ostream & operator<< (ostream &  out ,Animal & A)
{

cout << "espece = ";
out <<A.espece<<endl;
cout << "matricule = ";
out <<A.matricule<<endl;
return out ;
}


bool Animal::PushDateVaccin (string ch )
{
    vector <string> :: iterator i ; 
    for ( i = dateVaccin.begin(); i != dateVaccin.end(); i++)
    {
        if ( (*i) == ch )
        return false;
    }
    
    dateVaccin.push_back(ch);
    return true ; 
}