#include <iostream>
using namespace std;

void memory_reference(){
    int a = 20;
    int &b = a;
    cout << "a " << a << "\n";
    cout << "b " << b << "\n";
}

void get_memory_address(){
    string a = "Food";
    cout << "Address " << &a;
}

void create_pointer() {
    
}