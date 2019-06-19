#include <iostream>
using namespace std;

int main (){
    int L;
    int U;
    
    cout <<"Please enter L: ";
    cin >> L;
    cout<<endl<<"Please enter U: ";
    cin >> U;
    cout<<endl;
    
    for(int i = L; i < U; i++){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}