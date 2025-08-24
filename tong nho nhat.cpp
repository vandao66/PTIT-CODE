#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		string b,c;
		for(int i=0;i<n;i++){
			if(i%2==0) b+=a[i]+'0';
			else c+=a[i]+'0';
		}
		cout<<stoll(b)+stoll(c)<<endl;
	}
}