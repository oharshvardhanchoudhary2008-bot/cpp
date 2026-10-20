#include <bits/stdc++.h>
using namespace std;

////  when return is sum ////
// class Solution{  
//   public:  
//     int JobScheduling(vector<vector<int>>& jobs) { 
//         vector < pair < int , int > > vec;
//         for (int i =0 ; i<jobs.size();i++){
//             vec.push_back({jobs[i][1],jobs[i][2]});
//         }
//         sort(vec.begin(),vec.end());
//         int c=vec[0].first;
//         long long sum =0  ; 
//         int count =0;
//         for(int i=0 ; i<vec.size();i++){
//             if(c==vec[i].first){
//                 count=max(count,vec[i].second);
//             }else{
//                 c=vec[i].first;
//                 sum+=count;
//                 count=0;
//                 i--;
//             }
//         }
//         sum+=count;
//         return sum;
//     } 
// };
// int main(){
//     int n;
//     cin>>n;
//     vector < vector < int > > jobs(n,vector < int >(3));                                    
//     for(int i=0;i<n;i++){
//         cin>>jobs[i][0]>>jobs[i][1]>>jobs[i][2];
//     }
//     Solution sol;
//     int result = sol.JobScheduling(jobs);
//     cout<<result << endl;
//     return 0;
// }


/// when return is vecotr of vector for which jobs which we want to do to get maximum profit ////
// class Solution{
//   public:
//     vector<vector<int>> JobScheduling(vector<vector<int>>& jobs) {
//         vector < vector < int > > vec;
//         sort(jobs.begin(),jobs.end(),[](const vector<int>&a,const vector<int>&b){ return a[1]<b[1];
//         });
//         int c=jobs[0][1];
//         int maxprofit=0,ind=0;
//         for(int i=0;i<jobs.size();i++){
//             if(c==jobs[i][1]){
//                if(maxprofit<jobs[i][2]){
//                     ind=i;
//                     maxprofit=jobs[i][2];
//                }
//             }else{
//                 c=jobs[i][1];
//                 vec.push_back(jobs[ind]);
//                 maxprofit=0;
//                 i--;
//             }
//         }
//         vec.push_back(jobs[ind]);
//         return vec;
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     vector < vector < int > > jobs(n,vector < int >(3));                                    
//     for(int i=0;i<n;i++){
//         cin>>jobs[i][0]>>jobs[i][1]>>jobs[i][2];
//     }
//     Solution sol;
//     vector<vector<int>> result = sol.JobScheduling(jobs);
//     for (std::vector<int> &job : result) {
//       cout << job[0] << "<->" << job[1] << "<->" << job[2] << endl;
//     }
//     return 0;       
// }