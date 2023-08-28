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
//  FILE:        pokemon.h
//
//  DESCRIPTION:
//   The pokemon class header which contains all the functions
//   used by the pokemon parent class
//
//
**************************************************************/

#ifndef POKEMON_H
#define POKEMON_H

#include <string>

using namespace std;

class Pokemon
{
    public:
    Pokemon();

    virtual ~Pokemon();

    virtual void printData() = 0;


    protected:
    string type;
    float weight;
};

#endif
