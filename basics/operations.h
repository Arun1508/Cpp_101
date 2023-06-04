#include <iostream>
using namespace std;

void user_data_types(){
    // Data types
    int num = 23;
    float tax = 32.2333; // 6-7 decimal
    double price = 23.23; // 15 digits
    char initial = 's';
    string name = "Arun Mukesh";
    bool isMarried = true;
    cout << "Hello World" << num << price << initial << name << isMarried;
    int x1;
    cout << "Enter x ";
    // user input
    cin >> x1;
    cout << "X is " << x1;  

}

void arithmetic_operation(){
    // Arithmetic Operations
    int i = 3;
    cout << 2+3 << endl;
    cout << 3-2 << endl;
    cout << 3*2 << endl;
    cout << 3/2 << endl;
    cout << 3%2 << endl;
    cout << i++ << endl; // post increment
    cout << ++i << endl; // pre increment
    cout << i-- << endl; // post decrement 
    cout << --i << endl; // pre decrement

}

void assignment_operation(){
    // Assignment operation 
    int x = 10; cout << x << endl;
    x += 2; cout << x << endl;
    x -= 1; cout << x << endl;
    x *= 4; cout << x << endl;
    x /= 2; cout << x << endl;
    x %= 3; cout << x << endl;
    x &= 2; cout << x << endl;
    
}
