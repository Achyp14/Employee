//
//  main.cpp
//  Employer
//
//  Created by Andrew Chypurko on 4/11/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//

#include <iostream>
#include "Company.cpp"
#include "Employee.cpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "Example of Aggregation Relationship" << "\n";
    cout << "Here, an Employee - Andrii works for Company - H&M" << "\n";
    Employee *employee1 = new Employee("Andrii");
    Company *company1 = new Company("H&M", employee1);
    
    cout << "At this point Company gets deleted..." << "\n";
    delete company1;
    cout << "But Employee - " << employee1 -> getEmployeeName() << " is still there" << "\n";
    
    return(0);
}
