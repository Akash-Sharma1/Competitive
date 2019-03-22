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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==0 && d==0 && c!=0)
    {cout << 0;return 0;}
    a=a*2;
    d=-(d*2);
    ll c1=-c;
    ll c2=c;
    if(a+c1+c2+d==0)cout << 1;
    else cout << 0;
}