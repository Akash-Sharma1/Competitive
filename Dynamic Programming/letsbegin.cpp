#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
//memset(dp,1000000,sizeof(int)*1000001);
#define be begin()
#define pb push_back
#define en end()
#define le length()
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;
int dp[1000001];
int main(){
    //fastIO
    int seive[4]={2,3,5,7};
    memset(dp,1000000,sizeof(int)*100000);
    rep(i,0,4){dp[seive[i]]=1;}
    rep(j,0,4){
        int x=seive[j];
        rep(i,4,1000001){
            dp[i]=min(dp[i-x]+1,dp[i]);
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(dp[n]>=1000000) cout <<-1<<endl;
        else cout << dp[n] <<endl;
    }
}
