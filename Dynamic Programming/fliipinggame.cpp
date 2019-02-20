#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define en end()
#define le length()
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    int n;
    cin >> n;
    int arr[n];
    rep(i,0,n){
        int x;
        cin >>x;
        (x==1)?arr[i]=-1:arr[i]=1;
    }
    int maxsofar=0,curr=0;
    rep(i,0,n){
        curr+=arr[i];
        if(curr<0){curr=0;}
        maxsofar=max(maxsofar,curr);
    }
    curr=0;
    rep(i,0,n){if(arr[i]==-1)curr++;}
    (maxsofar)?cout <<maxsofar+curr:cout<<curr-1;
}