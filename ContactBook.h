#pragma once
#include <iostream>
using namespace std;

class Contact{
private:
    int number;
    string name;
public:
    Contact(); // default constructor

    Contact(int number, string name); //paramaterized constructor
    Contact(string name); // we can have multiple paramaterized constructors

    // getter
    string getName();
    // setter
    void setName(string newName);

    // display data
    void Display();
};
