#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main(){
    int arr[]={8,5,8,9,3,40,58,7};
    int target=40;
    cout<<linearSearch(arr,sizeof(arr)/4,target);
    return 0;
}