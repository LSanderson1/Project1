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
//  FILE:        pokemon.cpp
//
//  DESCRIPTION:
//   The pokemon class which contains only the pokemon class
//   constructor and destructor
//
//
**************************************************************/


#include "pokemon.h"
#include <iostream>

using namespace std;

/*****************************************************************
//  Function name: Pokemon() (Constructor)
//  
//  DESCRIPTION:   The Pokemon Constructor
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

Pokemon::Pokemon()
{
    cout << "Pokemon Constructor" << endl;
}

/*****************************************************************
//  Function name: ~Pokemon() (Deconstructor)
//  
//  DESCRIPTION:   The Pokemon Deconstructor
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

Pokemon::~Pokemon()
{
    cout << "Pokemon Destructor" << endl;
}
