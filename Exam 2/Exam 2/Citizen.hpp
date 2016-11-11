//
//  Citizen.hpp
//  Exam 2
//
//  Created by Cheree LaPierre on /1110/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

// I affirm that all code given below was written solely by me, Cheree LaPierre, and that any help I received adhered to the rules stated for this exam.


#ifndef Citizen_hpp
#define Citizen_hpp

#include <stdio.h>
#include <string>
using namespace std;
class Citizen
{
public:
    
    //Creates a new Citizen object with the passed in id, name, and favorite color
    //Once a citizen is created, you can't change their id or name but you can change their favorite color
    Citizen(int id, string firstName, string lastName, string color);
    
    //Creates a new Citizen object by copying data from the passed in citizen
    Citizen(Citizen* citizen);
    
    //Returns the first name of this citizen
    string getFirstName();
    
    //Returns the last name of this citizen
    string getLastName();
    
    //Returns the id for this citizen
    int getId();
    
    //Returns the favorite color for this citizen
    string getFavoriteColor();
    
    //Sets the favorite color for this citizen
    void setFavoriteColor(string color);
    
private:
    int newId;
    string newFirstName;
    string newLastName;
    string newColor;
    string newFavoriteColor;
};

#endif /* Citizen_hpp */
