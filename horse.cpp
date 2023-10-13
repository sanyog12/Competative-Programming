

#include <iostream>

using namespace std;

int main()
{
    //int arr[10]={30,10,90,10,10,90,90,9,9};
    int arr[]={1, 1, 1, 1000, 11, 1};
    int k = 100;
    int n = sizeof(arr)/sizeof(arr[0]);
    int cnt = 0;
    int sum = 0;
     int maxcount = 0;
    for(int i = 0; i < n; i++){
        
    if(sum + arr[i]  <=  k){
        
    sum +=arr[i];
    cnt++;
       
    }
    else{
        sum = 0;
        cnt = 0;
    }
    maxcount= max(maxcount,cnt);
    
    
    }
cout<<maxcount;
    return 0;
}
