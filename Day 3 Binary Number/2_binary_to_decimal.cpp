#include <iostream>
using namespace std;

int binToDecimal(int bin){
    int ans=0, pow=1;
    while (bin>0)
    {
        int remainder = bin%10; //find last digit
        ans= ans+(remainder*pow); //multiplying by 2^pow to remainder and adding it to answer
        bin= bin/10;  //updating binary number by removing last calculated digit
        pow=pow*2; //updating power
    }
    return ans;
    

}
int main(){
    cout << binToDecimal(101);
    return 0;
}