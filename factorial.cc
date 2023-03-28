#include <iostream>
using namespace std;

int fatt(int n){
    if(n == 1 || n == 0)
        return 1;
    return n * fatt(n-1);
}

int main(){
    int n;
    cout << "Factorial number: ";
    cin>>n;
    cout<< n << "! = " << fatt(n);
}
