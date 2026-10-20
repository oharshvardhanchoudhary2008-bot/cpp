#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<< " Enter the number which you want to check it is prime or not prime :";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)cout<< "\n it is not prime "<<i<<endl;
    }
    //both loop is same proper same 
    for(int i=2;i*i<=n;i++){
        if(n%i==0)cout<< "\n it is not prime "<<i<<endl;
    }
    cout << " \n it is prime  \n ";
    return 0;

}