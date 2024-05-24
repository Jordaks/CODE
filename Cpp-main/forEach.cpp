#include <iostream>
using namespace std;

int main(){

    string name[3] = {"SAMTZY" , "DREITZY" , "KARLTZY"};

    for(string i : name){
        cout << i << " ";
    }

    cout << "\n\n";
    
    int x = 1;

    while(x < 5){
        cout << "while Loop";
        x++;
    }

    cout << "\n\n";

    int y = 1;
    do{
        cout << "do while";
        y++;
    }while(y < 5);

    cout << "\n\n";

    for(int i = 0; i < 5; i++){
        cout << "for loop";
    }

    cout << "\n\n";

    for(int j = 0; j < 3; j++){
        cout << "nested\n";
            for(int k = 0; k < 3; k++){
                cout << " loop\n";
            }
    }


    return 0;
}