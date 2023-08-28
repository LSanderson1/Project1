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
//  FILE:        wartortle.cpp 
//
//  DESCRIPTION:
//   The wartortle child class that contains the functions of
//   wartortle. Constructor, destructor and printdata
//
//
**************************************************************/


#include "wartortle.h"
#include <iostream>


using namespace std;

/*****************************************************************
//  Function name: Wartorle() (Constructor)
//  
//  DESCRIPTION:   The Wartortle Constructor which stores information
//                 about Wartortle
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

Wartortle::Wartortle() : Pokemon()
{
    cout << "Wartortle Constructor" << endl;
    type = "Water";
    weight = 22.5f;
}

/*****************************************************************
//  Function name: ~Wartortle() (Deconstructor)
//    
//  DESCRIPTION:   The Wartortle deconstructor
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

Wartortle::~Wartortle()
{
    cout << "Wartortle Destructor" << endl;
}

/*****************************************************************
//  Function name: printdata
//  
//  DESCRIPTION:   prints the data in Wartortle (Type, Weight)
//
//  Parameters:    none
//
//  Return values:  none
//  
****************************************************************/

void Wartortle::printData() 
{
    cout << "Wartortle:" << endl;
    cout << "type : " << type << endl;
    cout << "weight: " << weight << endl;
}
