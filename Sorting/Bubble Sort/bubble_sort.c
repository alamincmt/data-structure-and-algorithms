#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int x[n+1];

	for(int i=1; i<=n; i++){
		cin >> x[i];	
	}

	int k = n;
	while(k != 0){
		int t = 0;
		for(int j = 1; j <= k-1; j++){
			if(x[j] > x[j+1]){
				swap(x[j], x[j+1]);
				t = j;			
			}		
		}
		k = t;	
	}
	
	return 0;
}
