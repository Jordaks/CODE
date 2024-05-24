#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size){

    bool swap;
    int i = 0;
    do{
        swap = false;
        for(int j = 0; j < size-1-i; j++){
            if(arr[j] > arr[j+1]){
                int tempo = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tempo;
                swap = true;
            }
        }
        i++;
    }while(swap);

}

void BucketSort(int arr[], int size){
    int max = arr[0]; 
   for (int i = 1; i < size; i++)
      if (arr[i] > max)
         max = arr[i];
   int array[max], i;
   for (int i = 0; i <= max; i++) {
      array[i] = 0;
   }
   for (int i = 0; i < size; i++) {
      array[arr[i]]++;
   }
   for (int i = 0, j = 0; i <= max; i++) {
      while (array[i] > 0) {
         arr[j++] = i;
         array[i]--;
      }
   }
}

int LinearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(key == arr[i]){
            return i;
        }
        if(i > size )
    }
    return -1;
}

int main(){
    
    int arr[10], i, key;
    int size = sizeof(arr)/sizeof(int);
    char choice, ans, Choice;

    cout << "Enter Unsroted numbers: [10]\n";
    for ( i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "\nChoose the letter\n";
    cout << "a. Bucket Sort\n";
    cout << "b. Radix Sort\n";
    cout << "c. Bubble Sort\n";
    cout << "\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    
    if (choice == 'c' || choice == 'C'){
        cout << "This is the Sorted array using Bubble Sort \n";
        BubbleSort(arr, size);
    }else if(choice == 'b' || choice == 'B'){
        cout << "This is the Sorted array using Radix Sort \n";
    }else if(choice == 'a' || choice == 'A'){
        cout << "This is the Sorted array using Bucket Sort \n";
        BucketSort(arr, size);
    }else{
        cout << "Invalid Input!!!";
    }

    cout << "\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    cout << "\n\nDo you want to proceed to search an element?(y/n): ";
    cin >> ans;

    /*
    if(ans == 'y'|| ans == 'Y'){
        continue;
    }else{
        break;
    }

    cout << "What number are you going to search: ";
    cin << key;
    cout << "\na. Jump Search\n";
    cout << "b. Exponential Search\n";
    cout << "c. Linear Search\n";
    cout << "\n";
    cout << "Enter your choice: ";
    cin >> Choice;
    
    if (Choice == 'c' || Choice == 'C'){
        cout << "This is the Key element using Linear Search \n";
    }else if(Choice == 'b' || Choice == 'B'){
        cout << "This is the Key element  using Exponential Search \n";
    }else if(Choice == 'a' || Choice == 'A'){
        cout << "This is the Key element using Jump Search \n";
    }else{
        cout << "Invalid Input!!!";
    }
*/
    return 0;
}