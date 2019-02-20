#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >>n;
	long long arr[n];
	map<long long,long long> mp;
	long long dp[100000+1];
	for(int i=0;i<n;i++){
		cin >>arr[i];
		mp[arr[i]]++;
	}
	dp[1] = mp[1];
	for(int i=2;i<=100000;i++){
		dp[i] = 0;
		dp[i]=max(dp[i-2]+i*mp[i],dp[i-1]);
	}
	cout<<dp[100000];
	
}