#include <iostream>
using namespace std;
void linear_search(int a[], int n, int key){
   int i, count = 0;
   for(i = 0; i < n; i++) {
     if(a[i] == key) { // compares each element of the array
       cout << "The element is found at position " << i+1 <<endl;
       count = count + 1;
     }
   }
   if(count == 0) // for unsuccessful search
     cout << "The element is not present in the array" <<endl;
}
int main(){
   int i, n, key;
   n = 6;
   int a[10] = {12, 44, 32, 18, 4, 10};
   key = 18;
   linear_search(a, n, key);
   key = 23;
   linear_search(a, n, key);
   return 0;
}
   // linear search on the block
   for(j = i; j<m; j++) {
      if(arr[j] == key)
         return j;
   }
   return -1;



int exponential_search(int[], int, int);
int main(){
   int i, n, key, pos;
   int arr[10] = {6, 11, 19, 24, 33, 54, 67, 81, 94, 99};
   cout<<"Array elements are: ";
   for(auto j : arr){
      cout<<j<<" ";
   }
   n = 10;
   key = 67;
   cout<<"\nThe element to be searched: "<<key;
   pos = exponential_search(arr, n, key);
   if(pos >= 0)
      cout << "\nThe element is found at " << pos;
   else
      cout << "\nUnsuccessful Search";
}
int exponential_search(int a[], int n, int key){
   int i, m, low = 0, high = n - 1, mid;
   i = 1;
   m = pow(2,i);
   if(a[0] == key)
      return 0;
   while(a[m] <= key && m < n) {
      i++;
      m = pow(2,i);
      while (low <= high) {
         mid = (low + high) / 2;
         if(a[mid] == key)
            return mid;
         else if(a[mid] < key)
            low = mid + 1;
         else
            high = mid - 1;
      }
   }
   return -1;
}


void linear_search(int a[], int n, int key){
   int i, count = 0;
   for(i = 0; i < n; i++) {
     if(a[i] == key) { // compares each element of the array
       cout << "The element is found at position " << i+1 <<endl;
       count = count + 1;
     }
   }
   if(count == 0) // for unsuccessful search
     cout << "The element is not present in the array" <<endl;
}
int main(){
   int i, n, key;
   n = 6;
   int a[10] = {12, 44, 32, 18, 4, 10};
   key = 18;
   linear_search(a, n, key);
   key = 23;
   linear_search(a, n, key);
   return 0;
}