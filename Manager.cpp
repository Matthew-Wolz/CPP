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

#include "Manager.h"

using namespace std;

//constructor inheritence required
Manager::Manager(string theName, double theWage, double theHours, double theBonus) : Employee(theName, theWage, theHours), bonus(theBonus){

}

//overridden function for calculating the manager's pay
double Manager::calcPay() const{
    return Employee::calcPay() + bonus;
}