// cp31 sheet 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    size_t n;
	    cin>>n;
	    int a =0;
	    int a1=-1,a2=-1;
	    int b1=-1,b2=-1;
	    while(n){
	        int c =n%10;
	        n/=10;
	        if(c==0){
	            if(b1==-1)b1=a;
	            else if(b2==-1){
	                b2=a;
	            }
	            //if(a1!=-1&&a2==-1)a2=a;
	        }else if(c==5){
	            if(a1==-1)
	                a1=a;
	            if(b1!=-1&&b2==-1)b2=a;
	        }else if(c==2){
	            if(a1!=-1&&a2==-1)a2=a;
	        }else if(c==7)if(a1!=-1&&a2==-1)a2=a;
	        a++;
	    }
	    if(a2==-1&&b2==-1)cout<<a<<endl;
	    else if(a2==-1){
	        cout<<b2-1<<endl;
	    }else if(b2==-1) cout<<a2-1<<endl;
	    else cout<<min(b2-1,a2-1)<<endl;
	}
	return 0;

}
