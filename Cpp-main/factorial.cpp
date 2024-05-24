#include <iostream>
using namespace std;

                             // JAVIER, MARK JORDAN B. 
                             // BSIT 1203
int main(){
                              
    int num;
    int factorial = 1;
    
    cout << "\n\nEnter a Positive: ";
    cin >> num;

    cout << "\n";
    
    if (num >= 1){
            for(int i = num; i >= 1; i--){

                factorial = factorial * i;
                cout << i;
                if(i > 1){
                    cout << " x ";
                }
                
            }
        cout << "\n\n";
        cout << "The Factorial of " << num << "! is " << factorial <<"\n\n";
    }

    if(num == 0){
        cout << "The Factorial of " << num << "! is " << 1 <<"\n\n";
        }else{
            if (num <= -1){
                cout << "Invalid input! Program stopped!" <<"\n\n";
            }
        }

    return 0;
}