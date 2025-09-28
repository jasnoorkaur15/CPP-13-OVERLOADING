//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

class fetch{
    public:
    int a,b;

    //Default Constructor
    fetch(){
        a = 3;
        b = 4;
    }
    
     // Parameterized Constructor (single argument)
    fetch(int m) {
        a = m;
        b = 7;
    }

    //Prameterized constructor (two arguments)
    fetch(int m, int n){
        a = m;
        b = n;
    }

    void disp(){
        cout<<"A is "<<a<<"\n";
        cout<<"B is "<<b<<"\n";
    }
};

int main() {
    fetch f1;
    fetch f2(5); 
    fetch f3(2,3);
    cout<<"Default constructor: "<<"\n";
    f1.disp();
    cout<<"Parameterized Constructor with single arguemnt: "<<"\n";
    f2.disp();
    cout<<"Default constructor with two arguments: "<<"\n";
    f3.disp();

    return 0;
}

//OUTPUT:
/*
Default constructor: 
A is 3
B is 4
Parameterized Constructor with single arguemnt: 
A is 5
B is 7
Default constructor with two arguments: 
A is 2
B is 3
*/
