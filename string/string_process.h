#include <iostream>
using namespace std;

void string_operation(){
    // string
    cout << "string" << endl;
    string name2 = "Arun";
    string name3 = "Mukesh";
    cout << name2 + name3 << endl;
    //append
    cout << "append\n";
    cout << name2.append(name3);
    cout << "\nlength " << name2.length();
    cout << "\nSize " << name2.size();
    // getline
    cout << "\ngetline get multiple spaces";
    string fullName;
    cout << "\n enter name";
    getline(cin, fullName);
    cout << "full name" << fullName;

}