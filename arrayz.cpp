/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int arr[3][3]={{5,11,6},{7,8,12},{9,13,17}};
    for(int i = 0; i <3; i++){
        for(int j = 0; j < 3; j++){
        cout<<" "<<arr[i][j];
    }
    cout<<endl;
    }
     cout<<endl;
    int count = 2;
 for(int i = 0; i < 3; i++){
 
 if(count%2==0){
     for(int j = 0; j < 3; j++){
         cout<<arr[i][j]<<" ";
     }
     }
     else{
          for(int j = 2; j>=0; j--){
         cout<<arr[i][j]<<" ";
     }
     }
     count++;
    
 }
}
  
