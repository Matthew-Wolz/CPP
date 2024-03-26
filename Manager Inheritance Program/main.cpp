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

/*
This program will take inputs of managers, storing them in a vector field, with their name, wage, hours worked, and bonus. It will then 
calculate the average and total pay of the managers with the help of the Employee and Manager classes using inheritance. 
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include "Manager.cpp"
#include "Employee.cpp"

using namespace std;

int main(){

    //prints all dollar amounts to 2 decimal places
    cout << fixed << showpoint << setprecision(2);

    int amountOfManagers;

    do{
        cout << "Enter the amount of managers: ";
        cin >> amountOfManagers;
        cout << endl;
    }while(amountOfManagers > 100); //no more than 100 managers

    //vector of pointers to managers
    vector<Manager*> managers; 

    for(int i = 0; i < amountOfManagers; i++){
        string managerName;
        double managerWage, managerHours, managerBonus;

        cout << "Enter manager " << i << " name: ";
        cin.ignore(); //ignore white space from previous input
        getline(cin, managerName);

        cout << "Enter manager " << i << " wage: ";
        cin >> managerWage;

        cout << "Enter manager " << i << " hours worked: ";
        cin >> managerHours;

        cout << "Enter manager " << i << " bonus: ";
        cin >> managerBonus;
        cout << endl;

        //dynamically create manager objects based off of the given inputs
        Manager* manager = new Manager(managerName, managerWage, managerHours, managerBonus);
        managers.push_back(manager); //allocate space for new manager
    }

    double highestPay = 0.0;
    double totalPay = 0.0;

    //intializing pointers to null
    Manager* highestPaid = nullptr;

    for(Manager* manager : managers){
        double pay = manager->calcPay();
        totalPay += pay;

        if(pay > highestPay){
            highestPay = pay;
            highestPaid = manager;
        }
    }

    double averagePay = totalPay / amountOfManagers;

    cout << "Highest paid manager is " << highestPaid->getName() << " who is paid $" << highestPaid->calcPay();
    cout << endl;

    cout << "Average pay is $" << averagePay << endl;
    
    //removes all dynamically allocated objects -- frees memory
    for(Manager* manager : managers){
        delete[] manager;
    }

    return 0;
}