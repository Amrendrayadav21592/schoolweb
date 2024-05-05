

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int rev[n];
    for (int i = 0; i <n; i++)
    {
        cout<< "enter the value in array"<<endl;
        /* code */
        cin>> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        rev[i]=arr[n-i-1];
        cout << rev[i]<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<< rev[i];
        cout << "code run succesfully"<< endl;
    }

    
    
    
    return 0;
}