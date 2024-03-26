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

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
    protected:
        string name;
        double wage;
        double hours;
    public:
        // Create a new employee
        Employee(string theName, double theWage, double theHours);
        // Calculate the employee’s pay.
        double calcPay() const;
        string getName() const;
};

#endif // EMPLOYEE_H