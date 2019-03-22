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

int main(){
    fastIO
    ll n,k;
    cin >>n>> k;
    int arr[n][2];
    rep(i,0,n){cin >>arr[i][0] >>arr[i][1];}

    ll sum=0;
    int prod=1;
    int visited[n]={0};
    while(k--){
        ll tempsum=sum;
        int idx=-1;
        rep(i,0,n){
            if(visited[i]==0 &&((sum+arr[i][0])*min(prod,arr[i][1])) > tempsum){
                tempsum=(sum+arr[i][0])*min(prod,arr[i][1]) ;
                idx=i;
            }
        }
        if(idx==-1){cout << sum;return 0;}
        visited[idx]=1;
        sum+=tempsum;
        prod=min(prod,arr[idx][1]);
    }
    cout <<sum;
    
}