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
//  FILE:        wartortle.h 
//
//  DESCRIPTION:
//   The wartortle child class header which contains the functions
//   in the wartortle class.
//
//
**************************************************************/


#ifndef WARTORTLE_H
#define WARTORTLE_H

#include "pokemon.h"

class Wartortle : public Pokemon
{
    public:
    Wartortle();

    virtual ~Wartortle();

    void printData();
};

#endif
