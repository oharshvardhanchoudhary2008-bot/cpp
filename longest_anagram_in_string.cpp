#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int l=0,maxlength=1;
    cout<<"enter the string\n";
    cin>>s;
  
    unordered_map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        if(mpp.find(s[i])!=mpp.end()){
            if(mpp[s[i]]>=l){
                l=mpp[s[i]]+1;
            }
        }
        mpp[s[i]]=i;
        maxlength=max(maxlength,i-l+1);
    }
    cout<<maxlength<<endl;
    return 0;
}

