#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	unordered_map<char, int> m;
	cin>>a;
 
  
    for (int i = 0; i < a.length(); i++) { 
        m[a[i]]++; 
    } 
  
     
	if(m.size()%2 !=0){
		cout<<"IGNORE HIM!";
	}else{
		cout<<"CHAT WITH HER!";
	}
	// your code goes here
	return 0;
}