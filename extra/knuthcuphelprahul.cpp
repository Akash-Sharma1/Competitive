#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pb push_back
#define en end()
#define le length()
#define mp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pii>
#define maxN 1000000005
using namespace std;

int main(){
    //fastIO
    ll n;
    cin >> n;
    ll arr[n];
    set<ll> st;
    rep(i,0,n){cin >> arr[i];}
    ll minn=LLONG_MAX;
    repd(i,n-1,0){
        st.insert(arr[i]);
        auto it = st.lower_bound(arr[i]);
        it--;
        ll temp=arr[i]-*it;
        if(temp!=0){minn=min(minn,arr[i]-*it);}
    }
    cout << minn;
}
