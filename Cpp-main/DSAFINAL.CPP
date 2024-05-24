#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void BubbleSort(int arr[], int size){

    int Iteration;
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
    Iteration = i;
    cout << "\nIterations: " << Iteration << "\n";
    
}

void BucketSort(int arr[], int size){
    int max = arr[0]; 
    int Iterations = 0;

   for (int i = 1; i < size; i++){
        //Iterations++;
      if (arr[i] > max)
         max = arr[i];
    }
   int array[max], i;
   for (int i = 0; i <= max; i++) {
      array[i] = 0;
      //Iterations++;
   }

   for (int i = 0; i < size; i++) {
      array[arr[i]]++;
      Iterations++;
   }

   for (int i = 0, j = 0; i <= max; i++) {
      while (array[i] > 0){
        Iterations++;
         arr[j++] = i;
         array[i]--;
      }
   }
   cout << "\nIterations: " << Iterations << "\n";
}


int getMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void countSort(int arr[], int exp, int &iter, int size) {
    vector<int> output(size); 
    vector<int> count(10, 0);

    
    for (int i = 0; i < size; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
            iter++;
}
void radixSort(int arr[], int &iterations, int size){
    int max = getMax(arr, size);

    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(arr, exp, iterations, size);
    }
}


void LinearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(key == arr[i]){
            cout << "The Key element found at index: ";
            cout << i;
            return;
        }
        
    }
    cout << "Element not found in array";
}

void JumpSearch(int arr[], int size, int key){
    
    int step = sqrt(size);
    int prev = 0;

    while (arr[min(step, size) - 1] < key)
    {
        prev = step;
        step += sqrt(size);
        if (prev >= size||prev<=size){
            cout << "Element not found in array";
            break;
            -1;
        }
    }

    while (arr[prev] < key){
        prev++;
        if (prev == min(step, size)){
            //cout << "Element not found in array";
             -1;
        }
    }

    if (arr[prev] == key){
        cout << "The Key element found at index: ";
        cout << prev;
    }
    /*else{
        cout << "Element not found in array";
    }*/
        
}

void binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key){
            cout << "The Key element found at index: " << mid ;
            return;
        }
        if (arr[mid] < key){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    cout << "Element not found in array";
}

void ExponentialSearch(int arr[], int key, int size) {
    
    if (arr[0] == key)
        cout << 0;

    
    int i = 1;
    while (i < size && arr[i] <= key)
        i *= 2;

    
    binarySearch(arr, i / 2,min(i, size - 1), key);
}

int main(){

    int iterations = 0;
    int arr[10], i, key;
    int size = sizeof(arr)/sizeof(int);
    char choice, ans, Choice;

    cout << "Enter Unsorted numbers: [10]\n";
    for ( i = 0; i < size; i++){
        cin >> arr[i];
        if (arr[i] >= 0||arr[i] <= 0){
            continue;
        }else{
            break;
        }
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
        radixSort(arr, iterations, size);
    }else if(choice == 'a' || choice == 'A'){
        cout << "This is the Sorted array using Bucket Sort \n";
        BucketSort(arr, size);
    }else{
        cout << "Invalid Input!!!";
    }

    if(choice == 'b' || choice == 'B'){
        cout << "\nIterations: " << iterations << "\n";
    }

    cout << "\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

do{


    cout << "\nDo you want to proceed to search an element?(y/n): ";
    cin >> ans;
    if(ans != 'y' && ans != 'Y'){
        break;
    }

    cout << "\nWhat number are you going to search: ";
    cin >> key;
    
    
    cout << "\nChoose the letter\n";
    cout << "a. Jump Search\n";
    cout << "b. Exponential Search\n";
    cout << "c. Linear Search\n";
    cout << "\n";
    cout << "Enter your choice: ";
    cin >> Choice;

    
    
    
    if (Choice == 'c' || Choice == 'C'){  
        LinearSearch(arr, size, key);
    }else if(Choice == 'b' || Choice == 'B'){
        ExponentialSearch( arr, key, size);
    }else if(Choice == 'a' || Choice == 'A'){
        JumpSearch(arr, size, key);
    }else{
        cout << "Invalid Input!!!";
    }

    

    break;
}while(ans == 'y'||ans == 'Y');

    return 0;
}