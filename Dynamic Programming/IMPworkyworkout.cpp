#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (long long i=(l);i<(r);i++)
#define repd(i, l, r) for (long long i=(l);i>=(r);i--)
#define ll long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<long long,long long>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void multiply(ll F[2][2], ll M[2][2]); 
  
void power(ll F[2][2], ll n); 
  
pii fib(ll n) 
{ 
  ll F[2][2] = {{1,1},{1,0}}; 
  power(F, n-1); 
  if(n==1){return mp(1,0);}
  return mp(F[0][0],F[1][0]); 
} 
void power(ll F[2][2], ll n) 
{ 
  if( n == 0 || n == 1) 
      return; 
  ll M[2][2] = {{1,1},{1,0}}; 
  
  power(F, n/2); 
  multiply(F, F); 
  
  if (n%2 != 0) 
     multiply(F, M); 
} 
void multiply(ll F[2][2], ll M[2][2]) 
{ 
  ll x =  (F[0][0]*M[0][0]%mod + F[0][1]*M[1][0]%mod)%mod; 
  ll y =  (F[0][0]*M[0][1]%mod + F[0][1]*M[1][1]%mod)%mod; 
  ll z =  (F[1][0]*M[0][0]%mod + F[1][1]*M[1][0]%mod)%mod; 
  ll w =  (F[1][0]*M[0][1]%mod + F[1][1]*M[1][1]%mod)%mod; 
  
  F[0][0] = x; 
  F[0][1] = y; 
  F[1][0] = z; 
  F[1][1] = w; 
}
int main(){
    fastIO
	ll t;
	cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n==1){cout<< 2<<endl;continue;}
        else if(n==2){cout<<3<<endl;continue;}
        pii ans=fib(n-2);
        cout<< (ans.first*5%mod+ans.second*3%mod)%mod<<endl;
    }
}