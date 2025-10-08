//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std;

class fetch{
    
  public : 
  int a,b;
  
  // Default Constructor
  fetch(void){
      a = 6;
      b = 10;
  }
  // Parameterised Constructor
  fetch(int m, int n){
      a = m;
      b = n;
  }
  
  // Copy Constructor of Default Constructor
  void disp(void){
      cout<<"a is "<<a<<"\n";
      cout<<"b is "<<b<<"\n";
  }
  
  // Copy Constructor of Parameterised Constructor
  fetch(fetch &obj){
      a = obj.a;
      b = obj.b;
  }
  
};

int main(void){
    // Defining objects
    fetch f1;
    fetch f2(1,5);
    fetch f3(f2);
    fetch f4(f1);
    
    // Calling Display function
    cout<<"Default Constructor: "<<"\n";
    f1.disp();
    cout<<"Parameterised Constructor: "<<"\n";
    f2.disp();
    cout<<"Copy Constructor of Parameterised Constructor: "<<"\n";
    f3.disp();
    cout<<"Copy Constructor of Default Constructor: "<<"\n";
    f4.disp();
    
    return 0;
}

//OUTPUT
/*
Default Constructor: 
a is 6
b is 10
Parameterised Constructor: 
a is 1
b is 5
Copy Constructor of Parameterised Constructor: 
a is 1
b is 5
Copy Constructor of Default Constructor: 
a is 6
b is 10
*/
