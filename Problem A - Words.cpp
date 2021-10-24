#include <bits/stdc++.h>
using namespace std;

int main() {
	int countCap = 0, countN = 0;
	string a;
	cin>>a;
	for(int i=0;i<a.size();++i){
	if((int(a[i]))<= 96){
		//cout <<(int)a[i]<<" ";
		countCap++;
	}else{
		countN++;
	}	
	}
	//cout <<(int)a[i]<<" ";
	//cout <<countCap<<" "<<countN<<" ";
	if(countCap > countN){
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    cout << a << endl;
	}
	else{
	transform(a.begin(), a.end(), a.begin(), ::tolower);
    cout << a << endl;	
	}
	// your code goes here
	return 0;
}
