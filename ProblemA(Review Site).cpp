#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;//taking test cases
	for(int i=0;i<t;++i){
		cin>>n;//taking the visitors number
		int arr[n],sum=0;
		for(int j=0;j<n;++j){
			cin>>arr[j];//taking all the visitors choices
			if(arr[j] == 1 || arr[j] == 3){//if it is other than 2 it will sum it up
				++sum;
			}
		}
			cout<<sum<<'\n';
	}
	// your code goes here
	return 0;
}