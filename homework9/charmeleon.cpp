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
//  FILE:        charmeleon.cpp 
//
//  DESCRIPTION:
//   The charmeleon child class inherited from pokemon which contains
//   the constructor, destructor and printdata of charmeleon.
//
//
**************************************************************/


#include "charmeleon.h"
#include <iostream>

using namespace std;

/*****************************************************************
//  Function name: Charmeleon() (Constructor)
//  
//  DESCRIPTION:   The Charmeleon constructor which sets the type and
//                 weight of Charmeleon. Inherited from pokemon
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

Charmeleon::Charmeleon() : Pokemon()
{
    cout << "Charmeleon Constructor" << endl;
    type = "Fire";
    weight = 5.f;
}

/*****************************************************************
//  Function name: ~Charmeleon (Deconstructor)
//  
//  DESCRIPTION:   The Deconstructor for the Charmeleon class
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

Charmeleon::~Charmeleon()
{
    cout << "Charmeleon Destructor" << endl;
}

/*****************************************************************
//  Function name: printdata
//  
//  DESCRIPTION:   Prints the data from Charmeleon
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

void Charmeleon::printData() 
{
    cout << "Charmeleon:" << endl;
    cout << "type : " << type << endl;
    cout << "weight: " << weight << endl;
}
