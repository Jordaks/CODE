#include <iostream>
#include <cmath>
using namespace std;
                                
//                                  JAVIER, MARK JORDAN B.
//                                  BSIT 1203

void solve(float num1 , float num2 , string Operator){  
    if(Operator == "+"){
        cout << num1 + num2;
    }else if(Operator == "-"){
        cout << num1 - num2;
    }else if(Operator == "*"){
        cout << num1 * num2;
    }else if(Operator == "/"){
        if(num2 == 0){
            cout << "Undefined";
        }else{
            cout << num1 / num2;
        }
    }else if(Operator == "sqrt"){
        int squareroot = sqrt(num1);
        cout << squareroot;
    }else{
        cout << "Invalid!!";
    }

}

int main(){

        float num1, num2;
        string Operator;
        char Ans;

        do{
            cout << "Enter First Number: ";
            cin >> num1;
            cout << "Enter Second Number: ";
            cin >> num2;
            cout << "Enter Operation ( + , - , / , * , sqrt ): ";
            cin >> Operator;
            cout << "The answer is: ";
            solve(num1 ,num2, Operator);

            cout << "\nDo you want to perform another operation? (y/n): ";
            cin >> Ans;
        }while((Ans == 'y')||(Ans == 'Y'));
    
    return 0;
}