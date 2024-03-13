// In class assignment
// Dylan Chehebar
// Do the in class assignment
// March 13, 2024

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    double num;
    cout << "Enter a value between 10 and 20" << endl;
    cin >> num;
    if (cin.fail()){
       cout << "Input failure. Kick rocks, chump" << endl;
       }
    else if (10 <= num && num <= 20){
        cout << "Data is valid" << endl;
    }
    else if (10 > num or num > 20){
cout << "Not in range" << endl;
    }

    return 0;
}