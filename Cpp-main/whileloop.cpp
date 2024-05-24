#include <iostream>
using namespace std;

int main(){

    int n;
    int mulTi = n * n + 1;
    int i = 0;

   cout << "Enter a number: ";
   cin >> n;

   while(i < n){
        if(n == 1 >= 100 || n == -1 >= -100){
            cout << "Answer is " << n << '=' << mulTi; 
        }
        i++;
    }

    return 0;
}