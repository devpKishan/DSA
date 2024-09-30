#include <iostream>
using namespace std;
int CurMax(int arr[], int size){
    int curMax=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>curMax)
        {
            curMax=arr[i];
        }
        
    }
    return curMax;


}

int main(){
    int num[5]={10,15,89,-10,58};
    cout<<CurMax(num,sizeof(num)/4);
}