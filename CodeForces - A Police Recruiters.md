# cp-solves
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int numEvent,sum=0,numOfPolice=0;
	cin>>numEvent;//taking input of the number of events
	int arr[numEvent];
	for(int i=0;i<numEvent;++i){
		cin>>arr[i];//taking the input as array
	}
	for(int i=0;i<numEvent;++i){
	if(arr[i]>=1 ){//checking if the input is equal to or greater than 1 for the police recruitment differrentiation
		numOfPolice+=arr[i];//adding the num of police recruitments
		while(numOfPolice !=0){//creating a loop to see if all the police are given a crime after hiring a police
			if(i==numEvent-1){
				break;//if it reaches the end of array it will break the loop but the array will stay in the same space
			}
			++i;
			numOfPolice+=arr[i];
		}
 
	}else if(arr[i] == -1){//seeing the number of not given crimes and adding them
		sum-=arr[i];
	}
	}
	cout<<sum;
	// your code goes here
	return 0;
}

