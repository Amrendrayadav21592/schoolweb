/*we can return a value from if statement only by putting it in fxn*/
#include <iostream>
using namespace std;
int fonk(){
    int n=7;
    int arr[]={0,1,2,4,5,6,7};
    int m=3;
    int rot[7];
    for (int i =0 ; i < n-m; i++)
    {
        /* code */
        rot[i]=arr[i+m];

    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        rot[i+m+1]=arr[i];
    }
    int count=0;
    int ans;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<rot[i]<<endl;
        
    }

    
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]==m){
            
            count+=1;
            ans=i;
        }
        
    }
    if(count==1){
        return ans;
    }
    else{
        return -1;
    }
    
    
}

int main()
{
    int x=fonk();
    cout <<x;

    
    return 0;
}