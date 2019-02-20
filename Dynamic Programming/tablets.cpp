#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define en end()
#define le length()
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    int n;
    cin >> n;
    int arr[n],dp1[n],dp2[n],sum=0;
    rep(i,0,n)cin >>arr[i];
    rep(i,0,n){dp1[i]=1;dp2[i]=1;}
    rep(i,1,n)if(arr[i-1]<arr[i])dp1[i]=dp1[i-1]+1;
    repd(i,n-2,0)if(arr[i+1]<arr[i])dp2[i]=dp2[i+1]+1;
    rep(i,0,n)sum+=max(dp1[i],);
    cout <<sum;
}