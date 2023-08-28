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
//  FILE:        caterpie.h 
//
//  DESCRIPTION:
//   The caterpir child class header which contains all the functions
//   used in the caterpie class.
//
//
**************************************************************/


#ifndef CATERPIE_H
#define CATERPIE_H

#include "pokemon.h"

class Caterpie : public Pokemon
{
    public:
    Caterpie();

    virtual ~Caterpie();

    void printData();
};

#endif
