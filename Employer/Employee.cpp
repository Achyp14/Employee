//
//  Employee.cpp
//  Employee
//
//  Created by Andrew Chypurko on 4/11/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//
#pragma once
#include "Employee.hpp"
#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
public:
    Employee(string _name){
        cout << "Create employee" << "\n";
        name = _name;
    }
    
    string getEmployeeName(){
        return name;
    };
    
    ~Employee()
    {
        cout << "Delete employee" << "\n";
        name = "" ;
    }
};
