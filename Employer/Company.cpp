//
//  Company.cpp
//  Employer
//
//  Created by Andrew Chypurko on 4/11/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//

#include "Company.hpp"
#include "Employee.cpp"
#include <iostream>
using namespace std;

class Company
{
private:
    string name;
    Employee *employee;
public:
    Company(string _name, Employee *_employee){
        cout << "Create company" << "\n";
        name = _name;
        employee = _employee;
    };
    
    ~Company()
    {
        cout << "Delete company" << "\n";
        name = "";
        employee = NULL;
    };
};
