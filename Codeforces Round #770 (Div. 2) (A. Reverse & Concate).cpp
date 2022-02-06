#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k=0;
	string a=" ";
	cin>>t;
	for(int i=0;i<t;++i){
	cin>>n>>k;
	//cout<<n<<k;
	cin>>a;
	string save = a; 
	reverse(a.begin(), a.end());
	if(k==0){
		cout<<1<<"\n";
	}
	else if(a == save){
		cout<<1<<"\n";
	}else if(a !=save){
		cout<<2<<"\n";
	}
	//cout<<a;
	// int counter = 0;
	// int matcher = 0;
	// if(counter == k){
	// counter=0;
	// cout<<matcher;
	// //cout<<itr<<givenStr<<"\n";
	// }
	// else{
// 	string save = a; 
// 	reverse(a.begin(), a.end());
// 	string newStr1,newStr2= " ";
// 	newStr1 = save + a;
// 	newStr2 = a + save;
// 	cout<<newStr1<<" "<<newStr2<<"\n";
// 	if(newStr1 == newStr2){
// 		matcher = 1;
// 	}
// 	else if(k == 0){
// 		matcher = 1;
// 	}
// 	else if (newStr1 != newStr2){
// 	matcher = 2;	
// 	}
// 	++c;
// 	}
// } 

	}
	return 0;
}