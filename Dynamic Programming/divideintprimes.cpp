#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vector<int> primes;
int dp[5000];
int func(int *arr,int n){
    int maxx=0;
    for(int i=0;i<primes.size();i++){
        dp[i]=max(func())
    }
}
int maxsum(int *arr,int n){
    return max(func(arr,zero-1,primes),func(arr+1,zero-2,primes),func(arr+2,zero-3,primes));
}
int main(){
    fastIO
    int n;
    cin >> n;
    int arr[n];
    rep(i,0,n){cin >>arr[i];}
    int sieve[n+1]={0};
    for(int i=2;i<n+1;i++){
        if(sieve[i]=-1){continue;}
        if(sieve[i]==0){
            primes.pb(i);
            for(int j=i;j<n+1;j+=i){sieve[i]=-1;}
        }
    }
    cout<< maxsum(arr,n);
}