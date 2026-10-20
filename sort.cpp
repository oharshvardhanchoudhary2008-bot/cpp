#include <iostream>



void printArr(int *arr){
    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<"   ";
    }
}



int main(){
    int arr [5];
    int i=5;
    while(i--)std::cin>>arr[5-i-1];


    // ////bubble short 
    // for(int i=0;i<5-1;i++){
    //     for(int j=0;j<5-i-1;j++){
    //         if(arr[j]>arr[j+1])std::swap(arr[j],arr[j+1]);
    //     }
    // }
    // std::cout<<"sort by bubble short\n";
    // printArr(arr);





    ///insertion short 
    // for(int i=0;i<5;i++){
    //     int minnum=i;
    //     for(int j=i+1;j<5;j++){
    //         if(arr[minnum]>arr[j]){
    //             minnum=j;
    //         }
    //     }
    //     std::swap(arr[minnum],arr[i]);
    // }
    // std::cout<<"\n this is print by insertion short \n ";
    // printArr(arr);




    //selection short
    for(int i=1;i<5;i++){
        int j=i-1;
        int num=arr[i];
        while(j>=0&&arr[j]>num){
            arr[j+1]=arr[j];
            j--;
        }
       arr[j+1]=num;
    }
    std::cout<<"this is short by selection short \n";
    printArr(arr);


    
    return 0;
}