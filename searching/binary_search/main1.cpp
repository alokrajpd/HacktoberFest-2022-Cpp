// C++ program to implement Binary Search
#include <iostream.h>
using namespace std;
 

int binarySearch(int arr[], int l, int r, int x)
{
   // enter your code here
}
 
int main()
{   
    int size;
    cin>>size; //size of array
    int arr[size];
    
    for(int i=0;i<size;i++){
       cin>>arr[i]; // elemnents in the array
    }
   
   int element; // element to be searched
    cin>>element;
 
    int result = binarySearch(arr, 0, size - 1, element);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
