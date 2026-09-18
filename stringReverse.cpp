//The author of this program is Muhammad Talal Tahir.
//The purpose of this program is to reverse a string input by the user and then free the 
//allocated memory for that string.

#include <iostream>
#include <string>

using namespace std;

//Function prototype.
string  stringReverse(string&);

int main(){

    string *s = new string();
    //Prompting the user to enter a string.
    cout << "Enter a String that you want to be reversed: ";
    cin >> *s;

    //Reversing that same string;
    stringReverse(*s);
    
    //Printing the reversed array.
    cout << "The reversed string is: " << *s << endl;

    delete s;

    return 0;

}

//Function definition.
string stringReverse(string &s){

    int left = 0;
    int right = s.size() - 1;

    while(left < right){
        char temp = s[right];
        s[right] = s[left];
        s[left] = temp;

        left++;
        right--;
    }

    return s;

}