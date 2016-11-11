//
//  Citizen.cpp
//  Exam 2
//
//  Created by Cheree LaPierre on /1110/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

// I affirm that all code given below was written solely by me, Cheree LaPierre, and that any help I received adhered to the rules stated for this exam.


#include "Citizen.hpp"

Citizen::Citizen(int id,string firstName, string lastName, string color)
{
    newId = id;
    newFirstName = firstName;
    newLastName = lastName;
    newColor = color;
}

Citizen::Citizen(Citizen* citizen)
{
    
}

string Citizen::getFirstName()
{
    return newFirstName;
}

string Citizen::getLastName()
{
    return newLastName;
}

int Citizen::getId()
{
    return newId;
}

string Citizen::getFavoriteColor()
{
    return newFavoriteColor;
}

void Citizen::setFavoriteColor(string color)
{
    newFavoriteColor = color;
}





