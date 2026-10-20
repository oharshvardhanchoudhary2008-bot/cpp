#include <bits/stdc++.h>
using namespace std;
int main(){
    int t =0;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string a,b ;
        int x=0,y=0,e=0,r=0;
        cin>>a>>b;
        vector<int>a1,b1;
        for(int i =0 ;i<n;i++){
            if(a[i]=='1'){
                if(i&1)x++;
                else y++;
            }
            if(b[i]=='1'){
                if(i&1)e++;
                else r++;
            }
        }
        
        
        if(x==e&&y==r)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}

// class Solution {
// public:
//     // Helper function to generate subset sums recursively
//     void findSums(int index, int currentSum, vector<int>& arr, vector<int>& sums) {
//         // Base case: if we have considered all elements
//         if (index == arr.size()) {
//             sums.push_back(currentSum);
//             return;
//         }

//         // Include current element
//         findSums(index + 1, currentSum + arr[index], arr, sums);

//         // Exclude current element
//         findSums(index + 1, currentSum, arr, sums);
//     }

//     // Main function
//     vector<int> subsetSums(vector<int>& arr) {
//         vector<int> sums;
//         findSums(0, 0, arr, sums);
//         sort(sums.begin(), sums.end()); // Sort in increasing order
//         return sums;
//     }
// };

// // Driver code
// int main() {
//     Solution sol;
//     vector<int> arr = {5, 2, 1};
//     vector<int> result = sol.subsetSums(arr);

//     for (int sum : result) {
//         cout << sum << " ";
//     }
//     cout << endl;

//     return 0;
// }
