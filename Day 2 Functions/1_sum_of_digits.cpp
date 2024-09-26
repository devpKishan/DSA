#include <iostream>
using namespace std;

int SumOfDigit(int num){
    int digitSum =0;
    while (num>0)
    {
        //finding Last digit
        int lastDigit= num%10;
        // find remaining digit
        num= num/10;
        digitSum+=lastDigit;
    }
    cout<<digitSum;
    
}

int main(){
    SumOfDigit(789);
    return 0;
}