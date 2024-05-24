#include<iostream>
using namespace std;

//                                  No. 1
//                                  JAVIER, MARK JORDAN B.
//                                  BSIT 1203

int main(){    
    
    char letters[10] = {'A','B','C','D','E','F','G','H','I','J'};
    
    for(int i = 0; i < 10; i++){
        cout << letters[i] << ", ";  
    }
    cout << "\n\n";
    
    cout << "First element is " << letters[0] << endl;
    cout << "Middle element is " << letters[4] << endl; 
    cout << "Last element is " << letters[9] << endl;
    
   return 0;
}