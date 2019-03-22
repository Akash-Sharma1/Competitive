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
    int n,m;
    cin >> n >> m;
    int arr[n]={0};
    vector<pi> range;
    rep(i,0,m){
        int x,j;
        cin >> x >> j;
        range.pb(mp(x,j));
    }
    int sum=0;
    rep(i,0,m){
        int l=range[i].first;
        int r=range[i].second;
        rep(j,l,r+1){
            arr[j]++;
        }
    }
    rep(i,0,n){sum+=arr[i];}
    int cut=-1;
    int maxx=-1;
    rep(i,0,m){
        int temp=sum;
        int l=range[i].first;
        int r=range[i].second;
        rep(j,l,r+1){
            if(arr[j]-1==0){temp--;}
        }
        if(maxx < temp ){maxx=temp; cut =1;}
    }
    int l=range[cut].first;
    int r=range[cut].second;
    rep(i,l,r+1){
        arr[i]--;
    }
    ///////////////////////////
    sum=maxx;
    cut=-1;
    maxx=-1;
    rep(i,0,m){
        int temp=sum;
        int l=range[i].first;
        int r=range[i].second;
        rep(j,l,r+1){
            if(arr[j]-1==0){temp--;}
        }
        if(maxx < temp ){maxx=temp; cut =1;}
    }
    l=range[cut].first;
    r=range[cut].second;
    cout <<maxx;
    
}