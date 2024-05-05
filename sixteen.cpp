/*// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>   this include inbuilt sort fxn iostream not contain sort fxn*/

#include <bits/stdc++.h> 
using namespace std;


int main()
{
    int x;
    cin>>x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        /* code */
        cout << "enter the value of array:  " <<endl;
        cin>>arr[i];
    }
    int m;
    cin>>m;
    
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    int min=arr[n-1]; //min taken as last value of sort array mtlb max in array after that decreasing its value on getting lower differences. 
    for (int i = 0; i < n-m+1; i++)
    {
        /* code */
        if((arr[i+m-1]-arr[i])<min){
            min=(arr[i+m-1]-arr[i]);
        }
        
        
    }
    cout <<"min difference: "<< min<<endl;
    



    return 0;
}








