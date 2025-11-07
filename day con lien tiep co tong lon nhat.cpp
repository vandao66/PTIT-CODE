#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int max=a[0],sum=0,check=0;
		for(int i=0;i<n;i++){
			sum+=a[i];
			if(sum>max) max=sum;
			if(sum<0){
				sum=0;
				check=1;
			}
		}
	    cout<<max<<endl;
	}
	return 0;
}