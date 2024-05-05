#include <iostream>
using namespace std;
bool check(int arr[],int size,int tocheck){
        if(arr[0]==tocheck){
            return true;
        }
        bool issmallercheck=check(arr+1,size-1,tocheck);
        return issmallercheck;
        }
    

int main()
{
    int arr=[1,2,3,4];
    int size=4;
    int tocheck;
    cin>>tocheck;
    check(arr,size,tocheck);
    
    return 0;
}