#include <iostream> 
int main(){
    int n; 
    std::cout<<"Enter the number which you want to convert into binary:";
    std::cin>>n;
    int bineary[32];
    int binarynumber=0;
    int  i=0;
    while(n){
        bineary[i++]=n%2;
        binarynumber=binarynumber*10+n%2;
        n/=2;
    }
    std::cout<<"\nthe binary of the number is :";
    for (int i=0;i<32;i++){
        std::cout<<bineary[31-i];
    }
    std::cout<<"\nthe decimal equivalent of the binary number is :"<<binarynumber;
    return 0;

}