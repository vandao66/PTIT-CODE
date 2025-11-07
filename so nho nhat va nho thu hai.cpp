#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(n==1){
			cout<<-1<<endl;
			continue;
		}
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int check=0,j=0;
		for(int i=1;i<n;i++){
			if(a[i]>a[0]){
				j=i;
				check=1;
				break;
			}
		}
		if(check) cout<<a[0]<<" "<<a[j]<<endl;
		else cout<<-1<<endl;
	}
}