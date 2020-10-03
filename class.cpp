//create a cpp class, object that explains basics of object oriented programming
//write your name below in comment and then your code below that name

#include <bits/stdc++.h> 

using namespace std; 

class Geeks 
{ 

    // Access specifier 

    public: 

  

    // Data Members 

    string geekname; 

  

    // Member Functions() 

    void printname() 

    { 

       cout << "Geekname is: " << geekname; 

    } 
}; 

  

int main() { 

  

    // Declare an object of class geeks 

    Geeks obj1; 

  

    // accessing data member 

    obj1.geekname = "Abhi"; 

  

    // accessing member function 

    obj1.printname(); 

    return 0; 
