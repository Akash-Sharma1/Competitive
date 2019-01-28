#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fastIO
    ll t;
    cin >> t;
    while(t--){
        ll k,x;
        cin >> k >> x;
        ll ans=x+9*(k-1);
        cout << ans<<endl;
    }
}