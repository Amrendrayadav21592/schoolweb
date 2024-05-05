#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<< "enter the element of array: "<<endl;
        cin >> arr[i];
    }
    int max=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<"maximum element of the array :"<< max<<endl;
    int min=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]<=min){
            min =arr[i];
        }
    }
    cout<<"minimum element of the array :"<< min<<endl;
    
    
    return 0;
}
/*easy approach without any sorting or any function*/