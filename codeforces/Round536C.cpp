#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define pii pair<ll,ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    fastIO
    ll n;
    cin >> n;
    ll arr[n];
    rep(i,0,n){cin >>arr[i];}
    sort(arr,arr+n);
    ll sum=0;
    int i=0;
    int j=n-1;
    while(i<j){
        sum+=(arr[i]+arr[j])*(arr[i]+arr[j]);
        i++;j--;
    }
    cout << sum;
}
