// pattern
#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++){

    for(int j = 5-i; j >0; j--){
      cout<<" ";
   
    }
    
    for(int k = 0; k < i; k++){
        cout<<"*";
    }
    
    cout<<i;
    
    for(int k = 0; k < i; k++){
        
        cout<<"*";
        
    }
    
    cout<<endl;
    
    }
    
    return 0;
}

op:-

    *1*
   **2**
  ***3***
 ****4****
*****5*****

//two sum

#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,5,7,1};
    int n = 4;
    int count = 0;
    for(int i = 0; i < 4; i++){
        
        for(int j = i+1; j < 4; j++){
            if(arr[i] + arr[j] == 6){
              
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}

op:- 2



