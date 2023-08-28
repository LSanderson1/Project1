/*****************************************************************
//  NAME:        Lloyd Sanderson
//  
//  HOMEWORK:    9
// 
//  CLASS:       ICS 212
// 
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        April 25, 2022
// 
//  FILE:        caterpie.cpp 
//
//  DESCRIPTION:
//   The caterpie child class inherited from pokemon which contains
//   the constructor, destructor, and printdata of caterpie.
//
//
**************************************************************/


#include "caterpie.h"
#include <iostream>

using namespace std;

/*****************************************************************
//  Function name: Caterpie() (Constructor)
//  
//  DESCRIPTION:   The Caterpie Constructor which stores the given
//                 information type, and weight of Caterpie (Inherited
//                 from the Pokemon class)
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

Caterpie::Caterpie() : Pokemon()
{
    cout << "Caterpie Constructor" << endl;
    type = "Bug";
    weight = 2.9f;
}

/*****************************************************************
//  Function name: ~Caterpie() (Deconstructor)
//  
//  DESCRIPTION:   The Caterpie Deconstructor
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

Caterpie::~Caterpie()
{
    cout << "Caterpie Destructor" << endl;
}

/*****************************************************************
//  Function name: printdata
//  
//  DESCRIPTION:   Prints all the data that was defined from the
//                 Caterpie constructor.
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

void Caterpie::printData() 
{
    cout << "Caterpie:" << endl;
    cout << "type : " << type << endl;
    cout << "weight: " << weight << endl;
}
