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
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;

bool solve(int *arr,int n,int idx,int k){
    ll sum=0;
    int c=1;
    rep(i,idx,n){
        sum+=arr[i]/c;
        if(sum>k)return false;
        c++;
    }
    if(sum <=k) return true;
    return false;
}

int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        int arr[n];
        rep(i,0,n){cin >>arr[i];}
        int m=ceil(sqrt(n));
        int start=0,end=n,ans=n;
        int calc[n]={0};
        for( int i = start; i < end && i<start+m; i+=m)
        {   
            if(calc[i]==0){
                bool x=solve(arr,n,i,k);
                if(x==false)calc[i]=-1;
                else calc[i]=1;
            }
            if(calc[i]>0){
                ans=i;
                end=i;
                start++;
                int len=i-1-start+1;
                i=start;
                if(len>0)m=sqrt(len);
                else break;
            }
            else if(i+m>=n){
                start++;
                i=start;
            }
        }
    cout <<ans+1 << endl;
    }
}