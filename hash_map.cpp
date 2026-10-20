#include <bits/stdc++.h>
using namespace std;
int main(){
        //hash 
        vector <int> vec={1,2,3,4,56,6};
        vector <int> hash(57);
        for(auto it=vec.begin();it!=vec.end();it++){
            hash[*it]++;
        }
        for(auto it:vec){
            cout<<"frequency of"<<it<<"this number is -->"<<hash[it]<<endl;
        }
        return 0;
    }

