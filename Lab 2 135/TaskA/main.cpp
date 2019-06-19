/*
Gabriella Gonzalez
Course: CSCI-136
Instructor: Maryash
asks the user to input an integar
in the range of 0 <n < 100.
if the number is out of range
the program should keep asking to re-enter 
until is valid
once # is valid, it sqaures it.
 */
 
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int x;

    cout <<"Please enter an integer: ";
    cin >> x;
    cout << endl;
    
    while (x <=0 || x >= 100){
        cout <<"Please re-enter number: ";
        cin >> x;
    }
    x = pow(x, 2);
    cout <<"Number squared is: "<< x << endl;

    return 0;
}