#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define en end()
#define le length()
#define mp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    ll n,b;
    cin >> n >> b;
    ll maxx=INT_MAX;
    for(ll maxprime=2;maxprime*maxprime<=b;maxprime++){
    ll temp=1;
    ll sum=0;
    ll c=1;
    ll i=1;
    ll divide=1;
    ll count=0;
    while(i<b){
        i=i*maxprime;
        count++;
        if(i==b){divide=count;}
    }
    while(c){
        temp*=maxprime;
        c=n/temp;
        sum+=c;
    }
    maxx=min(sum/divide,maxx);
    }
    cout << maxx;
}