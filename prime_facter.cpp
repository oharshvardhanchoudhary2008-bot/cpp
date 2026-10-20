#include <iostream>
#include <math.h>
bool isPrime(int n){
    for ( int i =2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    std::cout<<"Enter the number which all trime facter you want to print :";
    int n;
    std::cin>>n;
    std::cout<<std::endl;
    //brute force 
    std::cout<<" this number be printing bye brute force"<<std::endl;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(isPrime(i)){
                std::cout<<i<<" ";
            }
        }
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
    //optimal
    std::cout<<" this number be printing bye optimal;"<<std::endl;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(isPrime(i)){
                std::cout<<i<<" ";
            }
            if(isPrime(n/i)){
                std::cout<<n/i<<" ";
            }
        }
        
    }
    std::cout<<"\n";
    std::cout<<std::endl;
    //more optimal

    std::cout<<" this number be printing by more optimal;"<<std::endl;
    int a = n; 
    for(int i=2;i<=n;i++){
        if(n%i==0){
            std::cout<<i<<" ";
            n/=i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    std::cout<<std::endl;
    n=a;


    //most optimal
    std::cout<<" this number be printing by most optimal;"<<std::endl;
    for(int i=2;i<=sqrt(n);i++){
         if(n%i==0){
            std::cout<<i<<" ";
            n/=i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1){
        std::cout<<n<<"\n";
    }
    return 0;

}