
#include <iostream>
#include<math.h>
using namespace std;
	int isprime(int num){
 
   		for(int i = 2; i < num; i++){
        
        	if(num%i==0)
        	{
            	return 0;
        	}
        
        
    	}
    	return 1;
	}
int main()
{
    int count = 0;
    for(int i = 2; count !=25; i++)
    {
       
        if(isprime(i)){
        	
            cout<<i<<", ";
            
            count++;
            
        }
        
    }
}
