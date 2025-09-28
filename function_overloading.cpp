//Mishree Kalaria
//24070123052
//Btach:A2

#include <iostream>
using namespace std;

class Operations {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two floating-point numbers
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Operations m;

    cout << "Sum of 2 and 3 = " << m.add(2, 3) << endl;
    cout << "Sum of 1, 2 and 3 = " << m.add(1, 2, 3) << endl;
    cout << "Sum of 2.5 and 3.5 = " << m.add(2.5f, 3.5f) << endl;

    return 0;
}

//OUTPUT
/*
Sum of 2 and 3 = 5
Sum of 1, 2 and 3 = 6
Sum of 2.5 and 3.5 = 6
*/
