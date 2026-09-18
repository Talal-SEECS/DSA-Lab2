//The author of this program is Muhammad Talal Tahir.
//The purpose of this program is to create a dynamic salary program.

#include <iostream>
using namespace std;

int main(){

    int size = 20;
    int *salArray = new int[size];

    for(int i = 0; i < size; i++){
        cout << "Enter salary for employee " << i+1 <<":";
        cin >> salArray[i];
    }

    for(int i = 0; i < size; i++){
        salArray[i] += salArray[i] /(i + 1);
    }
    
    for(int i = 0; i < size; i++){
        cout << salArray[i] << " ";
    }
    cout << endl;

    delete[] salArray;
    return 0;
}