#include "Medecin.h"
Medecin::Medecin ()
{
this->ID = 0;
this->nom =  " ";
this->prenom =  " ";

}
Medecin::Medecin(int  ID ,string  nom ,string  prenom )
{
this->ID = ID ;
this->nom = nom ;
this->prenom = prenom ;
}
Medecin::~Medecin()
{}
void Medecin::afficherM()
{
cout << "ID = "<<ID<<endl ;
cout << "nom = "<<nom<<endl ;
cout << "prenom = "<<prenom<<endl ;
}
istream & operator>> (istream &  in ,Medecin & M)
{

cout << "ID = ";
in >>M.ID;
cout << "nom = ";
in >>M.nom;
cout << "prenom = ";
in >>M.prenom;
return in ;
}
ostream & operator<< (ostream &  out ,Medecin & M)
{

cout << "ID = ";
out <<M.ID<<endl;
cout << "nom = ";
out <<M.nom<<endl;
cout << "prenom = ";
out <<M.prenom<<endl;
return out ;
}

bool Medecin::AjoutMatriculeMedecin ( int matricule )
{
    vector <int> ::iterator i ; 
    for ( i = Matricule_Actif.begin(); i != Matricule_Actif.end(); i++)
    {
        if ((*i)==matricule)
        return false ; 
    }

    Matricule_Actif.push_back(matricule);
    return true ;
    
}




