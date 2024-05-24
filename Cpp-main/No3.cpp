#include<iostream>
#include <vector>
using namespace std;

//                             NO.3
//                             JAVIER, MARK JORDAN B 
//                             BSIT 1203

int main(){    
    
    string car[0];
    string Cars1, Cars2, Cars3, Cars4 ,Cars5;
    
    vector<string>cars;
    
    int size = sizeof(car)/sizeof(string);
    
    cout << "Enter 5 Cars: \n";
    cin >> Cars1;
    cin >> Cars2;
    cin >> Cars3;
    cin >> Cars4;
    cin >> Cars5;
    
    for(int j = 0; j < size; j++){
        cars.push_back(car[j]);
    }
    
    cars.push_back(Cars1);
    cars.push_back(Cars2);
    cars.push_back(Cars3);
    cars.push_back(Cars4);
    cars.push_back(Cars5);
    
    cout << endl;
    
    for(string i : cars){
        cout << i << ", ";
    }
    
   return 0;
}