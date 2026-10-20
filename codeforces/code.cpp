#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int n,m;
          cin>>n>>m;
          vector<int>v1(n),v2(m);
          for(int i=0;i<n;i++)cin>>v1[i];
          for(int i=0;i<m;i++)cin>>v2[i];
          int a=0,b=0;
          for(int i=0;i<n;i++){
              a+=abs(v1[i]-v1[i-1]);
          }
          for(int j=1;j<m;j++){
              b+=abs(v2[j]-v2[j-1]);
          }
          if(a>=b)cout<<1<<endl;
          else cout<<2<<endl;
     }
     return 0;
}