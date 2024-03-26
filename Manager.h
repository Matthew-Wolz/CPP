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

using namespace std;

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <string>

class Manager : public Employee{

    private:
        double bonus;

    public:
        Manager(string theName, double theWage, double theHours, double theBonus);
        //override function to override the employee classes calcPay() function.
        double calcPay() const; 
};

#endif 