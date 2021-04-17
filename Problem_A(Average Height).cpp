#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;//testcase input
	for(int i=0;i<t;++i){
		cin>>n;//arraysize input
		int arr[n],sum=0;//array initilisation
		int arrDup[n];//duplicate array
		for(int j=0;j<n;++j){
			cin>>arr[j];//array input
		}
		int f = 0;
		for(int k=0;k<n;++k){
			if((arr[k]%2)!=0){
				arrDup[f]=arr[k];//if odd thentake in arrDup
				++f;
			}else{
				++sum;//if not take sum
			}
		}
		// cout<<sum;
		int p=n-sum;
		for(int q=0;p<n;++q){
			if((arr[q]%2)==0){//if even take input in the remaining spaces
			arrDup[p]= arr[q];
			++p;
			}
		}
		for(int r=0;r<n;++r){
			cout<<arrDup[r]<<" ";//print the result array
		}
		cout<<'\n';
	}
	// your code goes here
	return 0;
}