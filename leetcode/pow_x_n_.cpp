#include <iostream>
using namespace std;
int main(){
    int n;
    double x,temp=1;
    cout<<"enter the power n -->";
    cin>>n;
    cout<<"\n enter the number which power we want -->";
    cin>>x;
    if(n<0){
        x=1/x;
        n=-n;
    }
    else if(n==0)return 1;
    

    while(n!=1){
        if((x>=1||x<=-1)&&x>=2147483647/x)return -1;
        if(n%2){// n is odd
            temp=temp*x;
            x=x*x;
        }else{
            x=x*x;
        }
        n=n/2;
    }
    cout<<x*temp;
    return 0;
}