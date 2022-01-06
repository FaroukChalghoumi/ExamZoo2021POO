#include "Zoo.h"
#include <typeinfo>


//##################    Destructeur     ##################
Zoo::~Zoo()
{
vector<Animal*>::iterator i ;
for( i= tabAnimaux.begin(); i != tabAnimaux.end(); i++ )
{
delete(*i);
}
}
//##################    Constructeur de copie     ##################
Zoo::Zoo( const Zoo &B )
{
Animal *p ;
vector<Animal*>::const_iterator i ;
for( i= B.tabAnimaux.begin(); i != B.tabAnimaux.end(); i++ )
{
if(typeid(**i)==typeid(Animal))
{
p= new Animal(**i);
}
else if(typeid(**i)==typeid(Lion))
{
p= new Lion(static_cast<const Lion&> (**i));
}
tabAnimaux.push_back(p);
}
}
//##################    Operateur d"affectation     ##################
Zoo& Zoo::operator=( const Zoo & B)
{
vector<Animal*>::const_iterator i ;
for( i= tabAnimaux.begin(); i != tabAnimaux.end(); i++ )
{
delete(*i);
}
tabAnimaux.clear();
Animal *p ;
for( i= B.tabAnimaux.begin(); i != B.tabAnimaux.end(); i++ )
{
if(typeid(**i)==typeid(Animal))
{
p= new Animal(**i);
}
else if(typeid(**i)==typeid(Lion))
{
p= new Lion(static_cast<const Lion&> (**i));
}
tabAnimaux.push_back(p);
}
return *this ;
}
//###############          Ajout      ################
bool Zoo::Ajouter( const Animal & A)
{
if (getMatricule(A.getmatricule()) != tabAnimaux.end() && tabAnimaux.size()>=1 )
return false ;
Animal *p = new Animal(A) ;
tabAnimaux.push_back(p);
return true ;
}
bool Zoo::Ajouter( const Lion & L)
{
if (getMatricule(L.getmatricule()) != tabAnimaux.end() && tabAnimaux.size()>=1 )
return false ;
Lion *p = new Lion(L) ;
tabAnimaux.push_back(p);
return true ;
}


vector<Animal*>::iterator Zoo::getMatricule( int matricule )
{
    vector<Animal*> :: iterator i ; 
    for( i= tabAnimaux.begin(); i != tabAnimaux.end(); i++ )
    {
        if ( (**i).getmatricule() == matricule )
        return i ;
    }
    return tabAnimaux.end();


}


bool Zoo::AjoutVaccin ( int matricule , string date )
{
    if (getMatricule(matricule) == tabAnimaux.end() && tabAnimaux.size()>=1 )
        return false;
        else
        {
            if (!(*getMatricule(matricule))->PushDateVaccin(date))
               {
                cout << "Date Existe deja "<<endl ; 
                return false ; 
               }
                else 
                {
                    cout << "Ajout Effectue"<<endl ;
                    return true ; 
                }
                 
        }
}


vector<Medecin> :: iterator Zoo::getMedecin ( int IDm )
{
    vector<Medecin> :: iterator i ;
         for( i= tabMedecin.begin(); i != tabMedecin.end(); i++ )
         {
             if ( i->getID() == IDm )
                return i ; 
         }

         return tabMedecin.end();
}

bool Zoo::AjouterMedecin ( const Medecin & M  )
{
    if (getMedecin(M.getID()) != tabMedecin.end() && tabMedecin.size()>=1 )
        return false ;


         tabMedecin.push_back(M);
         return true;

}


bool Zoo::AffecterAnimal ( int matricule  , Medecin M )
{
    try 
    {
        if (getMatricule(matricule) == tabAnimaux.end() && tabAnimaux.size()>=1 )
                throw string ("L'animal n'existe pas ! \n");
            else if ((getMedecin(M.getID()) == tabMedecin.end() && tabMedecin.size()>=1 ))
                throw string ("Medecin n'existe pas ! \n");
            else if (!M.AjoutMatriculeMedecin(matricule))
                throw string ("Animal deja Affecte ! \n");
                else 
                {
                    return (M.AjoutMatriculeMedecin(matricule));
                }
            
    }
    catch( string const &ch ) 
    {
        cerr << ch <<endl ;
    }
    return false ;
 
}


void Zoo::AfficherAnimalMedecin (const Medecin M )
{
    vector <int> :: const_iterator i ; 

    if ((getMedecin(M.getID()) != tabMedecin.end() && tabMedecin.size()>=1 ))
        //return false ;
        
        
        {
            for ( i = M.Matricule_Actif.begin(); i !=  M.Matricule_Actif.end(); i++)
            {
                //cout << (**getMatricule((*i))) ;
                 (*(getMatricule((*i))))->Afficher();
            }
        }
            
           
        
}



