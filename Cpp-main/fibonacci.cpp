#include <iostream>
using namespace std;

int main(){

    

    int num;
    long Fib = 0;

    cout << "Enter a num: \n";
    cin >> num;

    for(int num = 0; num < 100; num++){
        Fib += num;
        cout << Fib;
    }



    return 0;
}