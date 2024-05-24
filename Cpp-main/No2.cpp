#include <iostream>
using namespace std;

//                                  No. 2
//                                  JAVIER, MARK JORDAN B.
//                                  BSIT 1203

int main(){

    int grades[10] = {71,68,74,75,90,88,73,89,91,72};

    for(int i = 0; i < 10; i++){
        if(grades[i] >= 75){
            cout << grades[i] << " is " << "Passed\n";
        }else{
            cout << grades[i] << " is " << "Failed\n";
        }
    }
    
    return 0;
}