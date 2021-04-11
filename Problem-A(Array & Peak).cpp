#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;//taking the number of cases
	for(int i=0;i<t;++i){
		int n,k;
		cin>>n>>k;// taking the permutation number and peak number
		int arr[n]={0};//taking an array with 0 value
		if(k==0){//if peak is 0 the same array will be printed
			for(int j=0;j<n;++j){
				arr[j] = j+1 ;
				cout<<arr[j]<<" ";//printing the whole permutation numbers
			}
			}
			else if(k>=1){//if k is greater than 1 
				// cout<<k;
				int peak = (n-1)/2;
				// cout<<peak;
				if(peak<k){ //if k is smaller tha peak formula it will print -1
				cout<<-1;
				}
				else{
					for( int l=1,p=n;l<=(2*k-1),p>=(n-k+1);l+=2,--p){//putting all the peaks in the odd places of the array
						arr[l] = p;
					}for(int m=0,q=1;m<n,q<=(n-k);++m){//putting remaining numbers on remaining 0 numbered arrays
						if(arr[m] == 0){
							arr[m]=q;
							++q;
						}
					}
							for(int l=0;l<n;++l){//printing the whole array
				cout<<arr[l]<<" ";
			}
				}
			
			}
			cout<<'\n';
	}	
	// your code goes here
	return 0;
}