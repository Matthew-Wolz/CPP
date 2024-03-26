/*
# Author:               Matthew Wolz
# BannerID:             001396503
# Course:               CS 181
# Assignment:           PA4
# Date Assigned:        Monday, March 18, 2024
# Date/Time Due:        Saturday, March 30, 2024 -- 11:55 pm
# Description:          This program will exercise ObjectOriented concepts with C++.
# Certification of Authenticity:
        I certify that this assignment is entirely my own work.
*/

#include <string>
#include <cstdlib>

using namespace std;

#include "Employee.h"

Employee::Employee (string theName, double theWage, double theHours)
{
    name = theName;
    wage = theWage;
    hours = theHours;
}

double Employee::calcPay() const
{
    return wage * hours;
}

string Employee::getName () const
{
    return name;
}