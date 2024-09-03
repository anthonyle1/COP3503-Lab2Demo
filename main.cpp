#include <iostream>
#include <stdexcept>
#include "ContactBook.h"

using namespace std;

int main(){
    Contact Adrian = Contact();
    Adrian.Display();

    Contact Anthony = Contact(9 ,"Anthony");
    Anthony.Display();

    Contact Jason = Contact("Jason");
    Jason.Display();

    //Using getters/setters (accessors/mutators)
    cout << Anthony.getName() << endl;
    Anthony.setName("Ant");
    cout << Anthony.getName() << endl;
}
