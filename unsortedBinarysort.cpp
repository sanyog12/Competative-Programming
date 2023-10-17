
// you can implement binary search in unsorted array untill the elements are
// in specific order or else not


#include <iostream>

using namespace std;

int main()
{
    int arr[]={4,8,11,10,5,2};
    int low = 0;
    int high =sizeof(arr)/sizeof(arr[0])-1;
    int target = 11;

    while(low<=high){

        int mid =  (high+low)/2;
        
        if(target == arr[mid]){
            cout<<"the highest is found at index(0 based index) "<<mid;
            break;
        }

        if(target < arr[mid]){
            high = mid-1;
        }

        if(target > arr[mid]){
            low = mid+1;
        } 
      
    }
      if(low > high){
            cout<<"The target is not in array";
        }
    return 0;
}