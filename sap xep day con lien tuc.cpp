#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		int b[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
	    sort(b+1,b+n+1);
	    int l=1,r=n;
	    for(int i=1;i<=n;i++){
	    	if(a[i]!=b[i]){
	    		l=i;
	    		break;
			}
		}
		for(int i=n;i>=1;i--){
			if(a[i]!=b[i]){
				r=i;
				break;
			}
		}
		cout<<l<<" "<<r<<endl;
	}
}