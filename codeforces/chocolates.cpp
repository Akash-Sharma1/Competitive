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
    cin >>n;
    int arr[n];
    rep(i,0,n){cin >> arr[i];}
    ll sum=0;
    int last=INT_MAX;
    repd(i,n-1,0){
        if(arr[i]<last){sum+=arr[i];last=arr[i];}
        else{
            int x=min(arr[i],last-1);
            sum+=max(x,0);
            last=arr[i];
        }
    }
    cout <<sum;
}