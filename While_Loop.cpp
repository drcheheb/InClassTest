#include <iostream>
using namespace std;

int main(){
    int userNumber;

    cout << "Enter a number between 10 and 20";
    cin >> userNumber;

    if(userNumber >= 10 or userNumber <=20){
cout << "yippee!!" << endl;
    }

    return 0;
}