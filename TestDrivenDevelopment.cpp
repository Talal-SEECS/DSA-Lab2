//The author of this code is Muhammad Talal Tahir.
//The purpose of this code is to check if an array is sorted and check multiple test cases of it.

#include <iostream>
#include <cassert>

using namespace std;

//Function prototypes.
void testSortedArray();
void testUnsortedArray();
void testDuplicateValues();
void testSingleElement();
void testDescendingArray();
void testNegativeValues();
void testEmptyArray();
void testRepeatedValues();

int main(){


    //Calling test functions
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testRepeatedValues();

    return 0;
}

//Function Definitions for isSorted function and its multiple test cases.
bool isSorted(const int* arr, const int size){

    for (int i = 0; i < size; i++){
        
        if(arr[i] > arr[i + 1])
            return false;
        else
            return true;
    }
}

//Test case for already sorted array.
void testSortedArray(){
    
    int arr[] = {1,2,3,4,5};

    bool result = isSorted(arr,5);

    assert(result == true);

    cout << "The function works fine for Sorted Array!" << endl;
}

//Test case for unsorted array.
void testUnsortedArray(){
    
    int arr[] = {2,1,6,8,5};

    bool result = isSorted(arr,5);

    assert(result == false);
    cout << "The function works fine for Unsorted Array!" << endl;
}

//Test case for array containing duplicate values.
void testDuplicateValues(){
    
    int arr[] = {1,2,2,2,5};

    bool result = isSorted(arr,5);

    assert(result == true);
    cout << "The function works fine for Array containing duplicate values!" << endl;
}

//Test case for array containing only single element.
void testSingleElement(){
    
    int arr[] = {6};

    bool result = isSorted(arr,1);

    assert(result == true);
    cout << "The function works fine for Array containing single element!" << endl;
}

//Test case for array containing elements in descending array.
void testDescendingArray(){
    
    int arr[] = {5,4,3,2,1};

    bool result = isSorted(arr,5);

    assert(result == false);
    cout << "The function works fine for Array containing elements in descending order!" << endl;
}

//Test case for array containing negative values.
void testNegativeValues(){
    
    int arr[] = {-3,-2,-1};

    bool result = isSorted(arr,3);

    assert(result == true);
    cout << "The function works fine for Array containing negative values!" << endl;
}

//Test case for an empty array.
void testEmptyArray(){
    
    int arr[] = {};

    bool result = isSorted(arr,0);

    assert(result == true);
    cout << "The function works fine for an Empty Array!" << endl;
}

//Test case for an array containing a single value repeated multiple times.
void testRepeatedValues(){
    
    int arr[] = {2,2,2,2,2};

    bool result = isSorted(arr,5);

    assert(result == true);
    cout << "The function works fine for Array containing single value repeated multiple values!" << endl;
}