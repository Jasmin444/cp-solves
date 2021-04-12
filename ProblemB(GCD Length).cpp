#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;//taking number of cases
	for(int i=0;i<t;++i){
	cin>>a>>b>>c;// takin all 3 inputs
	int updatedA = pow(11,(a-1));//11s powers -1 will be taken as the main number s
	int limitOfA = pow(11,a);//11s powers will be taken as limit
	// string stringA = to_string (updatedA);
	// int sizeA = stringA.size();
	int updatedB = pow(11,(b-1));
	int limitOfB = pow(11,b);
	// string stringB = to_string (updatedB);
	// int sizeB = stringB.size();
	// cout<<updatedA<<" "<<updatedB<<'\n';
	int count = 0;
	if(count == 0){// using as identifier if 0 then will go to this condition
	for(int j=updatedA;j<limitOfA;++j){//looping through as base value and adding 1 to A if not support the condition
		int GCD = __gcd(j,updatedB);//seeing the gcd
			string stringGCD = to_string (GCD);// convert to string
	int sizeGCD = stringGCD.size();// get the size
	if(sizeGCD == c){// check wether is supporting the size
	cout<<j<<" "<<updatedB<<" "<<GCD<<'\n';	
	count = 0;//then it indentities as 0 
	break;//breaks the loop
	}
	}
	}
	else if(count == 1){
	for(int j=updatedB;j<limitOfB;++j){//looping through as base value and adding 1  to B if not support the condition
		int GCD = __gcd(j,updatedA);//seeing the gcd
			string stringGCD = to_string (GCD);// convert to string
	int sizeGCD = stringGCD.size();// get the size
	if(sizeGCD == c){// check wether is supporting the size
	cout<<updatedA<<" "<<j<<" "<<GCD<<'\n';
	count = 1;//then it indentities as 0
	break;//breaks the loop
	}
	}	
	}
	else if(count == -1){//looping through as base value and adding 1 to A & B if not support the condition
	for(int i=updatedA,j=updatedB;i<limitOfB,j<limitOfB;++i,++j){
		int GCD = __gcd(j,i);//seeing the gcd
			string stringGCD = to_string (GCD);// convert to string
	int sizeGCD = stringGCD.size();// get the size
	if(sizeGCD == c){//check wether is supporting the size
	cout<<i<<" "<<j<<" "<<GCD<<'\n';
	count = -1;//then it indentities as 0
	break;//breaks the loop
	}
	}	
	}
	}
	// your code goes here
	return 0;
}