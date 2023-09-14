#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char* names[5]={"ram","rom","shayam","sanyog","sanket"};
//    int x = strlen(names);
	
    for(int i = 0 ; i < 6; i++){
    	int x=strlen(names[i]);
    	
    	for(int j=0 ; j<x ;j++){
    	cout<<*(*(names+i)+j);	
		}
		cout<<endl;
	}
    
    return 0;
}

