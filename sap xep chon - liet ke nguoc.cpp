#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<vector<int>> s;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		int minx=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minx]){
				minx=j;
			}
		}
		swap(a[minx],a[i]);
		s.push_back(a);
	}
	for(int i=s.size()-1;i>=0;i--){
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0;j<n;j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}