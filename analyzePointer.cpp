//The author of this program is Muhammad Talal Tahir.
//The purpose of this program is to analyze where the pointer points in stack memory 
//and in heap memory.

#include <iostream>

using namespace std;

//Function prototype.
void analyzePointer(int*);

int main(){

    int x = 5;
    //Creating an int pointer in stack memory.
    int *iValue = &x;
    
    //passing the pointer to function.
    analyzePointer(iValue);

    //Creating an int pointer in heap memory.
    int *hPointer = new int(36);

    //Passing the heap pointer to function.
    analyzePointer(hPointer);

return 0;
}

//Function Definition.
void analyzePointer(int *ptr){

    cout << "The memory location pointed to by pointer is: " << &ptr << endl;
    cout << "The value at that memory address is: " << *ptr << endl;

}