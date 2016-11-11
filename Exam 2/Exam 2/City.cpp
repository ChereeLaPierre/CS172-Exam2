//
//  City.cpp
//  Exam 2
//
//  Created by Cheree LaPierre on /1110/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

// I affirm that all code given below was written solely by me, Cheree LaPierre, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <vector>
#include "City.hpp"
#include "Citizen.hpp"
#include <fstream>
using namespace std;

//Creates a new city with the given name
City::City(string cityName)
{
    newCityName = cityName;
    string fileName = cityName;
    fstream input;
    input.open(fileName + ".txt");
    if (input.fail())
        cout << "File does not exist";
}

// Destructor for city
City::~City()
{
    
}

// Return city name
string City::getCityName()
{
    return newCityName;
}

// Return population
int City::populationSize()
{
    return population;
}

// Return citizen at given index
Citizen* getCitizenAtIndex(int index)
{
    return 0;
}

// Add citizen to city
void City::addCitizen(Citizen* citizen)
{
    
}

// Return citizen with given id
Citizen* City::getCitizenWithId(int id)
{
    return 0;
}

vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
//    for (int i = 0; i < population; i++)
//    {
//        if (newColor == "Blue")
//            return vector<Citizen>
//    }
//
    return citizens;
}





















