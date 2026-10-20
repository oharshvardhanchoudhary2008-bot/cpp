#include <iostream>
#include <vector>

void quickSort(std::vector < int > &arr, int low , int high  ){
    if(low>=high)return;
    int l=low ,r=high;
    while(l<=r){
        while(l<r&&arr[l]<=arr[low])l++;
        while(l<r&&arr[r]>arr[low])r--;
        if(l<r)std::swap(arr[l],arr[r]);    
    }
    std::swap(arr[low],arr[r]);
    quickSort(arr, low, r-1);
    quickSort(arr, r+1, high);
    return ;
} 
int main(){
    std::vector <int> arr={38,27,43,3,9,82,10};
    quickSort(arr, 0, arr.size()-1);
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
