#include <iostream>
using namespace std;

int main(){
    int n=9;
    for (int i = 0; i < n; i++)
    {
        // print spaces
        for(int j=0; j<n-i-1; j++ ){
            cout<<" ";
        }
        // First Half Triangle
        for(int j=1; j<i+2; j++){
            cout<< j;
        }
        // Second Half Triangle
        for(int j=i; j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;

}