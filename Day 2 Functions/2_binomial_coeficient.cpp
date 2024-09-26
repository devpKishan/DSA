#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++){
        fact=fact*i;

    }
    return fact;
    
}
// nCr formula
// nCr=  n!/r!(n-r)!
int nCr(int n, int r){
    
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);

    int bino_nCr= fact_n/(fact_r*(fact_nmr));
    return bino_nCr;
}

int main(){
    int n=6; int r=2;
    cout<<nCr(n,r);
    return 0;
}