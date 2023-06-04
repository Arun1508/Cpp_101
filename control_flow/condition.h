#include <iostream>
using namespace std;


void condition_operation(){
    cout << "\nCondition operation";
    cout << "\n*************************";
    int x = 10;
    cout << "\n";
    if(x > 10){
        cout << "greater than 10";
    }else if (x < 10 ){
        cout << "lessthan 10";
    }else{
        cout << "eq to 10";
    }
}

void short_condition(){
    int x = 20;
    cout << "\n";
    string result = (x < 20) ? "Less than 20": (x > 20) ? "Greater Than 20" : "eq to 20";
    cout << result;
}

void switch_case(){
    int age = 1;
    switch (age )
    {
    case 1:
        cout << "One";
        break;

    case 2:
        cout << "2";
    
    default:
        break;
    }
}


void while_loop_sam(){
    int i=1;
    while(i < 5){
        for(int j=0; j<i; j++)
           cout << "*";
        cout<<"\n";
        i++;
    }
}