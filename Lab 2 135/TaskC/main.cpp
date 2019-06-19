#include <iostream>
using namespace std;

int main (){
    int myData[10];
    
    for(int i = 0; i < 10; i++){ //this will print out the first loops which contains all 1
        myData[i] = {1};
    }
       
   int index = 0; //this is setting the index array, if changed it will be updated
   int value = 1; //this declares each index to be 1, if changed it will be updated
    do{ //if the while statement is true you do this:
        myData[index] = {value}; //updated the user index to which value they want
        for(int c = 0; c < 10; c++){ //this will print the new array
            cout<<myData[c] << " ";
        }
    cout<<endl;
   cout <<"Enter number in index i: ";
   cin >> index;
   cout<<endl<<"Enter value: ";
   cin>> value;
    } 
while((index >= 0) && (index < 10)); //if the inputs values fulfill this statement, do the do loop

cout <<"index out of range. exit." << endl; //consider this the else statement of an if statement but for a while loop
    return 0;
}