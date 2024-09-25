#include <iostream>
using namespace std;
int main(){
    int n=9;
    int num=01;
    for(int i=0; i<n; i++){
        for( int j=0; j<n; j++){
            cout << num <<"  ";
            num++;
        }
        cout << endl;
    }


    return 0;
}