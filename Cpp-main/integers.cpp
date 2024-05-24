#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter a number: \n";
    cin >> num;

    if(num > 0){
        for(int i = 1; i <= num; i++){
            cout << i << "\n";
        }
    }else if(num < 0){
            for(int j = -1; j >= num; j--){
                cout << j << "\n";
            }
    }else{
        cout << "Invalid Input!!";
    }


    return 0;
}