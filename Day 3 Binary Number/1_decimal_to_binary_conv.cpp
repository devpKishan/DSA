#include <iostream>
using namespace std;
int deciToBinary(int deci){
    int binary=0;
    int pow=1;
    while (deci>0){
        int remainder = deci%2; //find remainder
        deci = deci/2; // find coeficient
        binary = binary+(remainder*pow);
        pow=pow*10;
    }
    return binary;
    
}
int main(){
    cout<< deciToBinary(1001)<<endl;
    cout<<101/10;
    return 0;
}
