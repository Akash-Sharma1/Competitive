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
//memset(dp,1000000,sizeof(ll)*1000001);
#define le length()
#define mp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pii>
#define maxN 1000000005
using namespace std;
ll query(ll *seg,ll node,ll low,ll high,ll x,ll y){
    if(x<=low && high<=y){
        return seg[node];
    }
    else if(x>high || low>y){return 0;}
    else{
        ll mid=(low+high)/2;
        ll a=query(seg,2*node+1,low,mid,x,y);
        ll b=query(seg,2*node+2,mid+1,high,x,y);
        return a+b;
    }
}
void update(ll *seg,ll low,ll high,ll node,ll idx,ll newval){
    if(low==high){
        seg[node]+=newval;
        if(seg[node]<0)seg[node]=0;
        return;
    }
    ll mid=(low+high)/2;
    if(idx<=mid){
        update(seg,low,mid,2*node+1,idx,newval);
    }
    else{
        update(seg,low,mid,2*node+2,idx,newval);
    }
    seg[node]=seg[2*node+1]+seg[2*node+2];
}
int main(){
    fastIO
    ll n,q;
    cin >> n >> q;
    ll seg[4*n]={0};
    while(q--){
        ll a;
        cin >> a;
        if(a==1){
            ll b;
            cin >> b;
            b--;
            update(seg,0,n-1,0,b,1);
        }
        if(a==2){
            ll b;
            cin >> b;
            b--;
            update(seg,0,n-1,0,b,-1);
        }
        if(a==3){
            ll x,y;
            cin >> x >> y;
            cout <<query(seg,0,0,n-1,x-1,y-1)<<endl;
        }
    }
}