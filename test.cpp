#include <iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<a<<b;
    return 0;
}
// #include <vector>
// int main(){
//     int t;
//     stdsd::cin>>t;
//     while(t--){
//         int n;
//         std::cin>>n;
//         std::vector<int>vec(n);
//         for(int i=0;i<n;i++){
//             std::cin>>vec[i];
//         }
//         int temp=-1;
//         for(int i=0;i<n;i++){
//             int a;
//             std::cin>>a;
//             if(vec[i]!=a){
//                 temp=i;
//             }
//         }
//         if(temp==-1){
//             std::cout<<"Tie"<<std::endl;
//         }else{
//             if(temp&1){
//                 std::cout<<"Ajisai"<<std::endl;
//             }
//             else{
//                 std::cout<<"Mai"<<std::endl;
//             }
//         }
//     }
//     return 0;
// }




// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t =0;
// //     cin>>t;
// //     while(t--){
// //         int n ;
// //         cin>>n;
// //         string a,b ;
// //         vector<int>x,y,e,r;
// //         cin>>a>>b;
// //         vector<int>a1,b1;
// //         for(int i =0 ;i<n;i++){
// //             if(a[i]=='1'){
// //                 if(i&1)x.push_back(i);
// //                 else y.push_back(i);
// //             }
// //             if(b[i]=='1'){
// //                 if(i&1)e.push_back(i);
// //                 else r.push_back(i);
// //             }
// //         }
        
        
// //         if(x.size()!=e.size()&&y.size()!=r.size()){cout<<-1<<"\n";continue;}
// //         int count=0;
// //         for(int i =0 ; i<x.size();i++){
// //             count+=abs((x[i]-e[i])>>1);
// //         }
// //         for(int i =0 ; i<y.size();i++){
// //              count+=abs((y[i]-r[i])>>1);
// //         }
// //         cout<<count<<endl;
// //     }
// //     return 0;
// // }





// // #include <climits>
// // #include <iostream>
// // #include <vector>
// // int main(){
// //      int t ; 
// //      std::cin>>t;
// //      while(t--){
// //           int n ,x,y;
// //           std::cin>>n>>x>>y;
// //           std::vector<int>mid,corner;
// //           mid.clear();
// //           corner.clear();
// //           int min=INT_MAX,min_index;
// //           for(int i =0 ; i < n ;i ++){
// //                int a ;
// //                std::cin>>a;
// //                if(i<x||i>=y){
// //                     corner.push_back(a);
// //                }else{
// //                     mid.push_back(a);
// //                     if(a<min){
// //                          min=a;
// //                          min_index=mid.size()-1;
// //                     }
// //                }
// //           }
// //           if(x==n||y==0||x==y){
// //                for(int it :corner){
// //                     std::cout<<it<<" ";
// //                }
// //                std::cout<<std::endl;
// //                continue;
// //           }
// //           std::vector<int>ans;
// //           int i =0 ;
// //           while(i<corner.size()&&corner[i]<min){
// //                ans.push_back(corner[i]);
// //                i++;
// //           }
// //           int a = min_index;
// //           while(a<mid.size()){
// //                ans.push_back(mid[a]);
// //                a++;
// //           }
// //           a=0;
// //           while(a<min_index){
// //                ans.push_back(mid[a]);
// //                a++;
// //           }
// //           while(i<corner.size()){
// //                ans.push_back(corner[i]);
// //                i++;
// //           }
// //           for(int it :ans){
// //                std::cout<<it<<" ";
// //           }
// //           std::cout<<std::endl;
// //      }
// //      return 0;
// // }














// // #include <bits/stdc++.h>
// // int main(){
// //      int t =0 ;
// //      std::cin>>t;
// //      while(t--){
// //           int n ; 
// //           int arr[n];
// //           int m=INT_MIN;
// //           while(n--){
// //                std::cin>>arr[n];
// //               m= std::max(arr[n],m);
// //           }
// //           int count =0;
// //           for(int it:arr){
// //                if(it==m)count++;
// //           }
// //           std::cout<<count<<std::endl;          
// //      }
// //      return 0;
// // }



// // #include <iostream>
// // int main(){
// //      int t=0;
// //      std::cin>>t;
// //      while(t--){
// //           int n =0;
// //           std::cin>>n;
// //           int b=n;
// //           int ans =0;
// //           int a =0;
// //           while(b--){
// //                std::cin>>a;
// //                ans^=a;
// //           }
// //           if(n&1)std::cout<<ans<<std::endl;
// //           else if(ans==0)std::cout<<a<<std::endl;
// //           else std::cout<<-1<<std::endl;
          
// //      }
// //      return 0;
// // }
// // // void fun(vector<int>&a,vector<int>&b,vector<int>& sum,int i){
// // //      if(i==b.size()){
// // //           long long d=0;
// // //           for(int it:sum){
// // //                d+=it;
// // //           }
// // //           ans=max(ans,d);
// // //           return ;
// // //      }
// // //      int temp;


// // // }
// // int main()
// // {
// //      int t =0 ;
// //      cin>>t;
// //      while(t--){
// //       int n , m ,d=0;
// //       cin>>n>>m;
// //       vector<int>b,sum;
// //       vector<bool>arr(n,false);
// //       while(n--){           
// //            int c;
// //            cin>>c;
// //            d+=c;
// //            sum.push_back(d);
// //           //a.push_back(c);
// //       }
// //       while(m--){
// //           int c ;
// //           cin>>c;
// //           b.push_back(c);
// //       }
// //       sort(b.begin(),b.end());
// //       for(int i =0,k=b.size()-1;k>=0;k--){
// //           if(sum[b[k]-1]<=0){
// //                i=k;
// //                k--;
// //                while(k>=0&&sum[b[k]-1]>0){
// //                     k--;
// //                }
// //                if(k>=0){
// //                     cout<<k<<"<-k!i->"<<i<<endl;
// //                     arr[b[k]-1]=true;
// //                     arr[b[i]-1]=true;
// //                }else{
// //                     cout<<k<<"k"<<endl;
// //                     arr[b[i]-1]=true;
// //                }
// //           }
// //       }
// //       int ans=0;
// //       for(int i =0,last=0;i<arr.size()+1;i++){
// //           cout<<last<<"!!"<<i<<endl;
// //           if(i==arr.size()){
// //                ans+=-sum[-1+i]+last;
// //                cout<<last<<"!last!"<<i<<endl;
// //           }else if(arr[i]){
// //                cout<<last<<"!!"<<i<<endl;
// //                ans+=(-sum[i]+last);
// //                last=-sum[i];
// //           }
// //       }
// //       std::cout<<ans<<"\n";
// //      }
// //      return 0;
// // }





// // #include <iostream>
// // #include <algorithm>
// // #include <vector>
// // int main(){
// //      int t=0;
// //      std::cin>>t;
// //      while(t--){
// //           int n,k;
// //           std::cin>>n>>k;
// //           std::vector<int>vec;
// //           vec.clear();
// //           int b;
// //           while(n--){
// //                std::cin>>b;
// //                vec.push_back(b);
// //           }
// //           std::sort(vec.begin(),vec.end());
// //           int count =1,ans=1;
// //           for(int i=0;i<vec.size()-1;i++){
// //                if(vec[i+1]<=vec[i]+k){
// //                     count++;
// //                     ans=std::max(count , ans);
// //                }else{
// //                     ans=std::max(count , ans);
// //                     count=1;
                    
// //                }
// //           }
// //           std::cout<<vec.size()-ans;
// //           std::cout<<std::endl;
// //      }
// //      return 0;
// // }
// // if(a&1){
     
// //      if(count ==0){
// //           if((k&1)==0)std::cout<<"no\n";
// //          else  std::cout<<"yes\n";
         
// //      }else {
// //           count--;
// //           if(count<=k){                         
// //                std::cout<<"yes\n";
              
// //           }else{
// //                std::cout<<"no\n";
// //           }
          
// //      }
// // }else{
// //      if(count==0)std::cout<<"yes\n";
// //      count--;
// //      if(count<=k){
// //           std::cout<<"yes\n";
// //      }else{
// //                std::cout<<"no\n";
// //      }
// // }
// // #include <iostream>
// // using namespace std;
// // int main(){
// //      int t ;
// //      cin>>t;
// //      while(t--){
// //           int c;
// //           cin>>c;
// //           int p=0;
// //           int n=0;
// //           while(c--){
// //                int a ;
// //                cin>>a;
// //                if(a==1)p++;
// //                else n++;
// //           }
// //           if(p>=n){
// //                if(n&1)cout<<1<<"\n";
// //                else cout<<0<<"\n";
// //                continue;
// //           }else{
// //                int ans=(n-p+1)/2;
// //                n-=(n-p+1)/2;
// //                if(n&1)ans++;
// //                cout<<ans<<"\n";
// //           }
// //      }
// //      return 0;
// // }
// // #include <iostream>
// // #include <vector>
// // #include <utility>
// // int main(){
// //      int t =0;
// //      std::cin>>t;
// //      while(t--){
// //           int n,k,ans=0;
// //           std::cin>>n>>k;
// //           std::vector<std::pair<int,int>>vp;
// //           int a =0;
// //           std::cin>>a;
// //           vp.push_back({a,1});
// //           for(int i=0;i<n-1;i++){
// //                std::cin>>a;
// //                if(vp.back().first==a){
// //                     vp.back().second++;
// //                }else{
// //                     vp.push_back({a,1});
// //                }
// //           }
// //           if(vp.size()==1){

// //                std::cout<<1<<"\n";
// //                continue;
// //           }
// //                if(k==0){
// //                     std::cout<<0<<"\n";
// //                     continue;
// //                }
               
// //                int flage=0;
// //                if(k==n){
// //                     flage=1;
// //                }
// //           while(k<=n){
// //                int a =vp.size();
// //                for(int i=0;i<a;i++){
// //                     if(vp[i].second==1){
// //                         vp.erase(vp.begin()+i);
// //                         n--;
// //                         a--;
// //                         i--;
// //                     }else{
// //                          vp[i].second--;
// //                     }
// //                }
// //                n-=a;
// //                 if(k==n){
// //                     flage=1;
// //                }
// //           }
// //           int temp;
          
// //           while(!vp.empty()){
// //             if(ans==0)temp=vp.size();
// //             int a =vp.size();
// //             int b=1;
// //                if((k-n)%vp.size()==0){                    
// //                   if(temp!=vp.size())ans++;
// //                   temp=vp.size();
// //                }                
// //                 if(a==1){
// //                     break;
// //                 }
// //                for(int i=0;i<a;i++){
// //                     if(vp[i].second==1){
// //                          vp.erase(vp.begin()+i);
// //                          n--;
// //                          a--;
// //                          i--;
// //                     }else{
// //                          vp[i].second--;
// //                     }
// //                }
// //                n-=a;
// //           }
// //           if(flage==1){
// //             if(ans==0){
// //                 std::cout<<1<<"\n";
// //                 continue;
// //             }
// //           }
// //           std::cout<<ans<<"\n";
// //      }
// //      return 0;
// // }



// // #include <bits/stdc++.h>
// // #include <climits>
// // //#include <iostream>
// // using namespace std;
// // class Solution {
// // public:
// //     long double minimiseMaxDistance(vector<int> &nums, int k) {
// //        map<double,int>mpp;
// //        for(int i =0;i<nums.size()-1;i++){
// //             mpp[abs(nums[i]-nums[i+1])]++;
// //        }
// //        while(k>0){
// //         auto a=prev(mpp.end());
// //        double val=a->first;
// //        int b=a->second;
// //        if(k>=b){
// //         mpp.erase(a);
// //         double al=INT_MAX;
// //         if(!mpp.empty()){
// //              a=prev(mpp.end());
// //               al=a->first;
// //         }else{
// //             al =INT_MAX;
// //         }
// //         double i =2.0;
// //         while(((val/i)>al)&&(k-b*(i-1)>=0))i++;
// //         if(k-b*(i-1)<0){
// //             return val/(i-2);
// //         }
// //         mpp[val/(i)]+=b;
// //         k-=b*(i-1);
// //        }else{
// //         return val;
// //        }
// //     }
// //         double val=(prev(mpp.end())->first);
// //        return val ;
      
// //     }
// // };
// // int main(){
// //     int n=0;
// //     cin>>n;
// //     vector < int > vec(n);
// //     for(int i=0;i<n;i++){
// //         cin>>vec[i];
// //     }
// //     int k=0;
// //     cin>>k;
// //     Solution sol;
// //     long double result = sol.minimiseMaxDistance(vec,k);
// //     cout<<result<<endl;
// //     return 0;
// // }

// // class Solution {
// //     int marge (vector<int>& nums,int low,int mid,int high,int k){
// //         vector<int>temp;
// //         int i=low,j=mid+1;
// //         int a=0;
// //         while((i<=mid)&&(j<=high)){
// //             if(i<=(j-k)){
// //                 cout<<nums[i]<<" "<<nums[j]<<endl;
// //                     a=max(a,nums[i]+nums[j]);
// //             } 
// //             if(nums[i]>=nums[j])temp.push_back(nums[j++]);
// //             else{
// //                 temp.push_back(nums[i++]);
                 
// //             }
            
// //         }
// //         while(i<=mid){
// //             if(j <= high && i <= (j - k)){                     
// //             a = max(a, nums[i] + nums[j]);
// //             cout<<nums[i]<<" "<<nums[j]<<endl;             
// //             }  
// //             temp.push_back(nums[i++]);
// //         }
// //         while(j<=high){
// //             if(i<=(j-k)){
// //                     a=max(a,nums[i]+nums[j]);
// //                     cout<<nums[i]<<" "<<nums[j]<<endl;
// //             } 
// //             temp.push_back(nums[j++]);
// //         }
// //         return a;
// //     }
// //     int margeShort(vector<int>& nums,int low,int high,int a,int k){
// //       if (high <= low)
// //         return 0;

// //       int mid = low + (high - low) / 2;
// //       margeShort(nums, mid + 1, high, a, k);
// //       margeShort(nums, low, mid, a, k);
// //       a = max(a, marge(nums, low, mid, high, k));
// //       return a;
       
// //     }
// // public:
// //     int maxValidPairSum(vector<int>& nums, int k) {
        
// //         return margeShort(nums,0,nums.size()-1,0,k);
// //     }
// // };
// // int main(){
// //     int n=0;
// //     cin>>n;
// //     vector < int > vec(n);
// //     for(int i=0;i<n;i++){
// //         cin>>vec[i];
// //     }
// //     int k=0;
// //     cin>>k;
// //     Solution sol;
// //     int result = sol.maxValidPairSum(vec,k);
// //     cout<<result<<endl;
// //     return 0;
// // }


// // class Solution {
// // public:
// //     int aggressiveCows(vector<int> &nums, int k) {
// //         //sort(nums.begin(),nums.end());
// //         int a =(nums.size()/k);
// //         int ans=0;
// //         for(int i=0;i<nums.size();i++){
// //             for(int j=1;((i+j)<(nums.size()))&&(j<=a);j++){
// //                 ans=max(ans,abs(nums[i+j]-nums[i]));
// //                 cout<<ans<<"!";
// //             }
// //         }
// //         return ans;
// //     }
// // };
// // int main(){
// //     int n=0;
// //     cin>>n;
// //     vector < int > vec(n);
// //     for(int i=0;i<n;i++){
// //         cin>>vec[i];
// //     }
// //     int k=0;
// //     cin>>k;
// //     Solution sol;
// //     int result = sol.aggressiveCows(vec,k);
// //     cout<<result<<endl;
// //     return 0;
// // }    




// // #include <iostream>

// // int main(){
// //      int t=0;
// //      std::cin>>t;
// //      while(t--){
// //           int n=0;
// //           std::cin>>n;
// //           int temp=0,i=0,count=0;
// //           while(i<n){
// //                std::cin>>temp;
// //                if(temp==2)count++;
// //                i++;
// //           }
// //           if(count==0)std::cout<<0; // Fixed 'std::count' to 'std::cout'
// //           else if((count&1)==0)std::cout<<count/2;
// //           else std::cout<<-1;
// //           std::cout<<std::endl;
// //      }
// //      return 0;
// // }

// // // #include <iostream>
// // // //#include <vector>
// // // int main(){
// // //      int t=0;
// // //      std::cin>>t;
// // //      while(t--){
// // //           int n=0;
// // //           std::cin>>n;
// // //           int a=0;
// // //           //std::vector<int> vec;
// // //           //vec.clear();
// // //           std::cin>>a;
// // //           //vec.push_back(a);
// // //           int l=a,r=-1;
// // //           int countl=1,countr=0;
// // //           bool t=1;
// // //           int i=1;
// // //           while(i<n){
// // //                std::cin>>a;
// // //                //vec.push_back(a);
// // //                if((l!=a)&&(r!=a)){
// // //                     if(r==-1){
// // //                          r=a;
// // //                          countr++;
// // //                          i++;
// // //                          continue;
// // //                     }
// // //                          t=0;
// // //                }
// // //                if(l==a){
// // //                     countl++;
// // //                }else if(r==a){
// // //                     countr++;
// // //                }
// // //                i++;
// // //           }
// // //           if(t){
// // //             if((countr>0)&&(abs(countl-countr)<2)){
// // //                 std::cout<<"YES\n";
// // //             }else if((countr==0)&&(countl==n)){
// // //                 std::cout<<"YES\n";
// // //             }
// // //             else{
// // //                 std::cout<<"NO\n";
// // //             }
// // //           }else{
// // //                 std::cout<<"NO\n";
// // //             }
// // //      }
// // //      return 0;
// // // }
// // // #include <iostream>
// // // #include <vector>
// // // using namespace std;
// // // int main(){
// // //           int t ;
// // //           cin >> t ;
// // //           while(t--){
// // //                     int n =0;
// // //                     int k =0;
// // //                     cin >>n>>k;
// // //                     vector < int > vec;
// // //                     vec.clear();
// // //                     int a=0;
// // //                     for(int i=0;i<n;i++){
// // //                               cin>>a;
// // //                               vec.push_back(a);
// // //                     }
                    
// // //                     if(k<2){ int a=1;
// // //                               for(int i=0; i<(n-1);i++){
// // //                                         if(vec[i]>vec[i+1]){
// // //                                                   cout<<"No\n" ;
// // //                                                   a=0;
// // //                                                   break;
// // //                                         }
// // //                               }
// // //                               if(a)cout<<"yes\n" ;
                              
// // //                     }else{
// // //                               cout<<"yes\n" ;
// // //                     }
                    
// // //           }
// // //           return 0;
// // // }

// // // // #include <bits/stdc++.h>
// // // // int swap1(int *arr){
// // // //     int min1=INT_MAX;
// // // //     int max1=INT_MIN;
// // // //     for(int i=0;i<5;i++){
// // // //         if(arr[i]>max1){
// // // //             max1=arr[i];
// // // //         }
// // // //         if(arr[i]<min1){
// // // //             min1=arr[i];
// // // //         }
// // // //         std::swap(min1,max1);
// // // //     }
// // // //     return 0;
// // // // }
// // // // int sum(int arr[5]){
// // // //     int sum=0;
// // // //     for (int i =0 ;i<5; i++){
// // // //         sum+=arr[i];
// // // //     }
// // // //     return sum;
// // // // }
// // // // int multiplay(int arr[], int size) {
// // // //     int multiplier = 1;
// // // //     for (int i = 0; i < size; i++) {
// // // //         multiplier*=arr[i];
// // // //     }
// // // //     return multiplier;
// // // // }
// // // // int main() {
// // // //     int arr[5] = {1, 2, 3, 4, 5};
// // // //     int multiplier = multiplay(arr, 5);
// // // //     std::cout << "The multiplier is: " << multiplier << std::endl;
// // // //     int sum1 = sum(arr);
// // // //     std::cout<< " the sum of the array us : " << sum1<< std::endl;
// // // //     swap1(&arr[0]);
// // // //     for(int i=0;i<5;i++){
// // // //         std::cout<<arr[i]<<" ";
// // // //     }
// // // //     return 0;
// // // // }