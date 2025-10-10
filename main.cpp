#include <iostream>
using namespace std;

int sum(int n){
    int s = 0;
    for (int i = 1; i <= n; ++i)   
        s += i;                 
    return s;
}
int nhan(int m){
    int a=1;
    if (m <= 1) return 1;
    return m * nhan(m - 1);
}                     

int main(){
    int n = 5;
    cout << "Sum = " << sum(n) << endl; //1+2+3+4+5=15;
    cout << "Nhan = " << nhan(n) << endl; //5!=120
    return 0;
}
