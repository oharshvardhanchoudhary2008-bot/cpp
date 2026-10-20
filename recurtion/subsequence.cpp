#include <iostream>
#include <vector>


void subsequneceforsum(std::vector<int> arr,std::vector<std::vector<int>> &ans,std::vector<int> &temp,int k,int sum,int i){
    if(i==arr.size())return;
    if(sum==k){
        ans.push_back(temp);
        return;
    }
    if(sum>k)return ;
    temp.push_back(arr[i]);
    subsequneceforsum(arr,ans,temp,k,sum+arr[i],i+1);
    temp.pop_back();
    subsequneceforsum(arr,ans,temp,k,sum,i+1);
}

int main (){
    int n;
    std::cout<<"enter the size of array -->";
    std::cin>>n;
    std::vector<int> arr(n);
    std::cout<<"enter the elements of array -->";
    for(int i=0;i<n;i++)std::cin>>arr[i];           
    int k;
    std::cout<<"enter the target sum(K)-->";
    std::cin>>k;
    std::vector<std::vector<int>> ans;
    std::vector<int> temp;
    subsequneceforsum(arr,ans,temp,k,0,0);
    for( int i=0;i<ans.size();i++){
        for (int it :ans[i])std::cout<<it<<" ";
        std::cout<<"\n";
    }
    return 0;
}