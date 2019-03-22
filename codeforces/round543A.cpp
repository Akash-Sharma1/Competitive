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
    int n,m,k;
    cin >> n >> m >> k;
    int p[n+1],school[n+1];
    rep(i,1,n+1){cin >> p[i];}
    rep(i,1,n+1){cin >> school[i];}
    int c=0;
    int maxx[n+1]={0};
    rep(i,1,n+1){maxx[school[i]]=max(maxx[school[i]],p[i]);}
    rep(i,0,k){
        int x;
        cin >> x;
        if(maxx[school[x]]!=p[x]){c++;}
    }
    cout << c;
}