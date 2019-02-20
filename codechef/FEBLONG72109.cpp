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
#define pi pair<ll,ll>
#define pii pair<ll,pii>
#define mod 1000000007
using namespace std;
ll power(ll x,ll y){
    ll res = 1;
    x = x % mod;
    while (y > 0)
    {if (y & 1)
      res = (res*x) % mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
void gcdExtended(ll a, ll b, ll *x, ll *y) {
    if (a == 0) { 
        *x = 0;
        *y = 1;
        return;} 
    ll x1, y1; // To store results of recursive call 
    gcdExtended(b%a, a, &x1, &y1); 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
} 
ll modinv(ll a){
    ll x,y;
    gcdExtended(a,mod, &x, &y);
    ll res = (x%mod + mod) % mod; 
    return res;  
} 
int main(){
    fastIO
    ll t;
    cin >> t;
    while(t--){
        ll n,k,m;
        cin >> n >> k >> m;
        ll num,den;
        if(m %2!=0){
             int x=ceil((double)m/2);
             num=power(n,x)%mod-power(n-1,x)%mod;
             if(num <0){num+=mod;}
             den=power(n,x)%mod;
        }
        else{
            int x=ceil((double)m/2);
            ll nume1=power(n,x)%mod-power(n-1,x)%mod;
            if(nume1<0){nume1+=mod;}
            ll denom1=power(n,x)%mod;
            ll nume2=power(n-1,x)%mod;
            ll denom2=(denom1*(n+k));
            ll lcm=((denom1/__gcd(denom1,denom2))*denom2);
            num =(((lcm/denom1)*nume1)+((lcm/denom2)*nume2))%mod;
            den=lcm%mod;
        }
        ll gcd=__gcd(num,den);
        num/=gcd;
        den/=gcd;
        ll inv=modinv(den)%mod;
        inv=(inv*num)%mod;
        cout <<inv <<endl;
    }
}