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
//  FILE:        charmeleon.h 
//
//  DESCRIPTION:
//   The charmeleon child class header which contains all the
//   functions used in the charmeleon class.
//
//
**************************************************************/


#ifndef CHARMELEON_H
#define CHARMELEON_H

#include "pokemon.h"

class Charmeleon : public Pokemon
{
    public:
    Charmeleon();

    virtual ~Charmeleon();

    void printData();
};

#endif
