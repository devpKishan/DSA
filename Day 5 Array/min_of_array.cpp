#include <iostream>
using namespace std;
int CurMin(int arr[],int size){
    int curMin = arr[0]; // Pointer to the first element of the array
    for (int i = 0; i < size; i++) //Running loop untill end of array
    {
        if (arr[i]<curMin)//If arr nth index less than Current minimum then store arr in curMin
        {
            curMin=arr[i];
        }
        
    }
    return curMin;
    

}

int main(){
    int num[5]={10,15,8,4,10};
    cout<<CurMin(num,5);
    return 0;
}