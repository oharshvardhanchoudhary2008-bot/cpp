#include <iostream>
#include <math.h>
double NthRoot(double x, int n){
    double ans=1;
    while(n--){
       ans*=x;
    }
    return ans; 
}
int main(){
    double m=0;
    int n=0;
    std::cout<<"Enter the number which nth root you want to find:value of m:";
    std::cin>>m;
    std::cout<<"Enter the value of n:";
    std::cin>>n;
    double low=1,high=m;
    while((high-low)>1e-6){
        double mid = (low+high)/2.0;
        if(NthRoot(mid,n)==m){
            low =mid ; 
            break;
        }else if(NthRoot(mid,n)<m){
            low=mid;
        }else{
            high=mid;
        }
    }std::cout<<pow(low,n)<<std::endl;
    std::cout<<"the Nth root of your number is :"<< low <<std::endl;
    
}