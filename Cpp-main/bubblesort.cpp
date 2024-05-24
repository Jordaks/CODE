#include <iostream>
using namespace std;

int main(){
    
        int a[] = {6, 1, 5, 3, 2, 4};

        int length = 6;

        cout << "\nThis is the unsorted array: \n\n";
        for (int k = 0; k < length; k++){
            cout << a[k] << " ";
        }

        for(int i = 0; i < length; i++ ){
            for (int j = 0; j < length - 1; j++){
                if(a[j] > a[j + 1]){
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
            
        }

        
        

        cout << "\n\nThis is Bubble Sort Algorithm\n\n";

        for (int i = 0; i < length; i++)
        {
           cout << a[i] << " ";
        }
        cout << endl << endl;

    return 0;
}