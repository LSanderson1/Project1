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
//  FILE:        main.cpp
//
//  DESCRIPTION:
//   The main function which demonstrates inheritance within classes
//   given the Pokemon parent class and the Wartortle, Charmeleon and
//   Caterpie child classes. Prints the data of each pokemon and gives them
//   nickmanes through each initialzation call.
//
//
**************************************************************/

#include <string>
#include <iostream>
#include <vector>
#include <map>

#include "pokemon.h"
#include "wartortle.h"
#include "charmeleon.h"
#include "caterpie.h"

using namespace std;

/*****************************************************************
//  Function name: checkPokedex
//  
//  DESCRIPTION:   A polymorphic function which retrieves from the 
//                 data the information that was stored in the map
//                 and prints out each pokemon
//
//  Parameters:    Pokemon *pokemon: Each child class pokemon with
//                 the given nickname
//
//  Return values:  none
//  
****************************************************************/

void checkPokedex(Pokemon *pokemon)
{
    pokemon->printData();
}

/*****************************************************************
//  Function name: main
//  
//  DESCRIPTION:   The main function whose job is to create a vector of
//                 names, store those names, give the corresponding names
//                 to each child class pokemon and call them using
//                 checkPokedex. For vector, push_back was used to insert
//                 names in the vector and for map, string is the key and
//                 pokemon pointer is the value, insert puts the names in the
//                 map and make_pair links the pokemon pointer (nickname) and
//                 the actual name of the pokemon.
//
//  Parameters:    none
//
//  Return values:  0: Success
//  
****************************************************************/


int main()
{
    vector < string > names;
    cout << "inserting names " << endl;
    names.push_back("zappy");
    names.push_back("zack");
    names.push_back("jack");
    cout << endl;

    map < string, Pokemon * > pokemons;
    
    cout << "creating pokemon zappy the wartortle" << endl;
    Pokemon *zappy = new Wartortle();
    cout << endl;
    cout << "creating pokemon zack the charmeleon" << endl;
    Pokemon *zack = new Charmeleon();
    cout << endl;
    cout << "creating pokemon jack the caterpie" << endl;
    Pokemon *jack = new Caterpie();
    cout << endl;

    cout << "inserting pokemons " << endl; 
    pokemons.insert(make_pair(names[0], zappy));
    pokemons.insert(make_pair(names[1], zack));
    pokemons.insert(make_pair(names[2], jack));
    cout << endl;

    cout << "iterating over the names " << endl;
    for(vector<string>::iterator it = names.begin(); it != names.end(); it++)
    {
        cout << "using key: '" << *it << "'" << endl;
        Pokemon *pokemon = pokemons.find(*it)->second;

        cout << "calling the 'checkPokedex()' function" << endl;
        checkPokedex(pokemon);
        cout << endl;

        cout << "deleting pokemon '" << *it << "'" << endl;
        delete pokemon;
        cout << endl;
    }
    cout << endl;

    pokemons.clear();


    return 0;
}
