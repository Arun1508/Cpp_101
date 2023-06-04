#include <iostream>
using namespace std;

void process_arrays(){
    int length_of_array;
    cout << "Enter the length of array";
    cin >> length_of_array;
    int int_arr[length_of_array];
    for (int i=0; i<length_of_array; i++){
        int_arr[i] = i;
    }
    for(int i=0; i<length_of_array; i++){
        cout << int_arr[i] << endl;
    }

    //for each loop
    // for(int i : int_arr){
    //     cout << i << endl;
    // }
    // getting waring on for each loop
    cout << "size of " << sizeof(int_arr);

}