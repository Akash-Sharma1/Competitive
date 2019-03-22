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
    int n;
    cin >> n;
    int arr[n];
    rep(i,0,n){cin >>arr[i];}
    int maxx=0;
    int curr=0;
    rep(i,0,n){
        if(arr[i]==0){curr=0;continue;}
        curr++;
        maxx=max(curr,maxx);
        if(i==n-1 && curr!=n){
            int j=0;
            while(arr[j]==1){j++;curr++;maxx=max(maxx,curr);}
        }
    }
    cout << maxx;
}