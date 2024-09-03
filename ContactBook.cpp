#pragma once
#include "ContactBook.h"
using namespace std;

Contact::Contact(){ // default constructor
    number = 1;
    name = "Adrian";
}

Contact::Contact(int number, string name){ //para- constructor
    this->number = number;
    this->name = name;
}

Contact::Contact(string name){ //parameterized constructor no 2!
    this->name = name;
    // since we didn't set a default value in the variable initaliztation, we need to set a default number value
    // here as well
    number = 3;
}

string Contact::getName(){
    return name;
}

void Contact::setName(string newName) {
    name = newName;
}

void Contact::Display(){
    cout << "Number: " << number << endl;
    cout << "Name: " << name << endl << endl;
}
