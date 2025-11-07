#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	vector<vector<int>> s;
	for(int i=0;i<n;i++){
		int j=i-1;
		int key=a[i];
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		vector<int> b(i+1);
		for(int k=0;k<=i;k++) b[k]=a[k];
		s.push_back(b);
	}
	for(int i=s.size()-1;i>=0;i--){
		cout<<"Buoc "<<i<<": ";
		for(int j=0;j<s[i].size();j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
}