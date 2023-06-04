#include <iostream>
using namespace std;

// struct car {
//     string brand;
//     string model;
//     int year;
// };



void test_structs() {
    struct {
        string brand;
        string model;
        int year;   
    } car1, myCar2;
    car1.brand = "Hyundai";
    car1.model = "Eon";
    car1.year = 2014;

    cout << "Brand " << car1.brand;
    cout << "model " << car1.model;
    cout << "year " << car1.year;
}