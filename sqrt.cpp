#include <iostream>
int main(){
    double n=0 ;
    std::cout<<"Enter the nuber whose square root you want to find :";
    std::cin>>n;
    std::cout<<std::endl;
    double  low =1 , high = n ;
    while(high-low>1e-6){
        double mid = (low+high)/2;
        if(low==high)break;
        if(mid*mid<n){
            low=mid;
        }else{
            high=mid;
        }
    }
    std::cout<<"the square root of the number is :"<< low <<std::endl;
}