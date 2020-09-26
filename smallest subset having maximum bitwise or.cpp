#include <bits/stdc++.h> 
using namespace std; 
// arr[n-1] | t  != k
int Count(int arr[],int n,int k,int t, vector<vector<int>> &dp){
	
	if(n==0){
		return 100000;
	}
	
	if(t == k){
	
		return 0;
	}
	
	
	int t1,t2;
	
	t1 = arr[n-1] | t;
	t2 = t;
	
	if(dp[n][k-t] != -1){
		return dp[n][k-t];
	}
	else{
		return dp[n][k-t] = min( 1 + Count(arr,n-1,k,t1,dp) , Count(arr,n-1,k,t2,dp) );
	}
	
}

int main() 
{ 
	int n,k=0;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		k = k|arr[i];
	}
	
	vector<vector<int> > dp( n+1 , vector<int> (k+1, -1));  
	
	
	cout<<Count(arr,n,k,0,dp);
}
