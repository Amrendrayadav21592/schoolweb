#include <algorithm>
#include <iostream>
using namespace std;
struct Pair{
    
    int min;
    int max;

};
Pair getminmax(int arr[],int n){
    
    Pair minmax;
    sort(arr,arr+n);
    minmax.min=arr[0];
    minmax.max=arr[n-1];
    return minmax;
}

int main()
{
    int arr[]={10,15,16,48,25,45,65,98,24,36,79,100};
    int size=sizeof(arr)/sizeof(arr[0]);
    Pair minmax=getminmax(arr, size);
    cout<< "minimum value of array :"<< minmax.min <<endl;
    cout << "maximum value of array :"<< minmax.max <<endl;
    
    return 0;
}


/*If you have an array then sizeof(array) returns the number of bytes the array occupies. Since each element can take more than 1 byte of space, you have to divide the result with the size of one element (sizeof(array[0])). This gives you number of elements in the array.*/


/*Note that if you pass an array to a function, the above won't work since the array decays to a pointer and sizeof(array) returns the size of the pointer.*/
