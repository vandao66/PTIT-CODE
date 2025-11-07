#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	ll b[4];
	b[0]=a[0]*a[1];
	b[1]=a[n-1]*a[n-2];
	b[3]=a[n-1]*a[0]*a[1];
	b[2]=a[n-1]*a[n-2]*a[n-3];
	sort(b,b+4);
	cout<<b[3]<<endl;
} 