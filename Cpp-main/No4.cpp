#include<iostream>
#include <vector>
using namespace std;

//                				NO.4
//                  			JAVIER, MARK JORDAN B.						 
//                  			BSIT 1203
int main(){    
    
    int num[10] = {71 ,68 ,74 ,75 ,90 ,88 ,72 ,85 ,86 ,73};
    int grade1, grade2, grade3, grade4, grade5;
    
    vector<int>nums;
   
    int size = sizeof(num)/sizeof(int);

    cout << endl;
    cout << "This is the passed grades in the vector array\n";
    
    cout << endl;
    nums.push_back(num[3]);
    nums.push_back(num[4]);
    nums.push_back(num[5]);
    nums.push_back(num[7]);
    nums.push_back(num[8]);
    
    for(int i : nums){
       cout << i << " ";

    }
    
   return 0;
}