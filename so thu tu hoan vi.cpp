#include <bits/stdc++.h>
using namespace std;
int gthua(int n){
	if(n==1 || n==0) return 1;
	return n*gthua(n-1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=1;i<=n;i++) cin>>a[i];
		int s=1;
		for(int i=1;i<=n;i++){
			int cnt=0;
			for(int j=i;j<=n;j++){
				if(a[j]<a[i]) cnt++;
			}
			s+=cnt*gthua(n-i); // tinh i tu 1 den n
		}
		cout<<s<<endl;
	}
}