#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NUll );cout.tie(NUll );
#define All (v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll  long long
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
    ll t;
    cin >> t;
    while(t--){
        ll n,a,b;
        cin >> n >> a >> b;
        if(2*a < b ){
            cout << n*a <<endl;
        }
        else{
            ll temp=0;
            temp=n/2;
            ll sum=temp*b;
            sum+=(n-temp*2)*a;
            cout << sum <<endl; 
        }
    }
}