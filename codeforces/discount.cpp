#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pb push_back
#define en end()
//memset(dp,1000000,sizeof(int)*1000001);
#define le length()
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    ll n;
    cin >> n;
    ll arr[n];
    rep(i,0,n){cin >>arr[i];}
    sort(arr,arr+n);
    ll m;
    cin >> m;
    ll q[n];
    rep(i,0,m){cin >> q[i];}
    ll sum=0;
    rep(i,0,n){
        sum+=arr[i];
    }
    rep(i,0,m){
        cout <<sum-arr[n-q[i]]<<endl;
    }

}