//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std;

class Multiply {
public:
    int value;

    // Constructor
    Multiply(int v = 0) {
        value = v;
    }

    // Overloading * operator
    Multiply operator * (Multiply const &obj) {
        Multiply res;
        res.value = value * obj.value;
        return res;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Multiply m1(5), m2(4);

    cout << "First Object: ";
    m1.display();

    cout << "Second Object: ";
    m2.display();

    // Using overloaded * operator
    Multiply m3 = m1 * m2;

    cout << "Result of Multiplication: ";
    m3.display();

    return 0;
}

//OUTPUT
/*
First Object: Value: 5
Second Object: Value: 4
Result of Multiplication: Value: 20
*/
