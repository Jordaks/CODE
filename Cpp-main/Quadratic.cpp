#include <iostream>
#include <cmath>
using namespace std;
//                                  Find X-Quadratic Formula
//                                  JAVIER, MARK JORDAN B.
//                                  BSIT 1203

    void Quadratic(int num1, int num2, int num3 , int given1, int given2){
        int total = given1 * num1 * num3;
        int ans = pow(num2, 2);
        double anss = ans - total;
        int totall = sqrt(anss);
        int totalll = -num2 + totall;
        int Total = -num2 - totall;
        int ansGiven = given2 * num1;
        float x1 = float(totalll) / ansGiven;   
        float x2 = Total / ansGiven;

        cout << "The value of x1: " << x1 << endl;
        cout << "The value of x2: " << x2;
        cout << "\n-------------------------------------\n";

        float check = pow(x1, 2);
        float check1 = num1 * check;
        float check2 = num2 * x1;
        float total1 = check1 + check2;
        float total2 = total1 + num3;
        int checkk = pow(x2, 2);
        int check3 = num1 * checkk;
        int check4 = num2 * x2;
        int total3 = check3 + check4;
        int total4 = total3 + num3;    

        
        cout << "Checking\n";
        cout << "The value of x1 has an output of " << total2 << "," << endl;
        cout << "The value of x2 has an output of " << total4 << endl;

    }
int main(){

    int num1, num2, num3;
    int given1 = 4;
    int given2 = 2;

    cout << "Enter the value of a: ";
    cin >> num1;
    cout << "Enter the value of b: ";
    cin >> num2;
    cout << "Enter the value of c: ";
    cin >> num3;
    cout << "-------------------------------------\n";
    Quadratic(num1, num2, num3, given1, given2);

    return 0;
}