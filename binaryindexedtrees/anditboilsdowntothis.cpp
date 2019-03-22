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
int bit[100005];
int n;
void update(int idx,int val){
    for(int i=idx;i<=n;i+=i&(-i)){
        bit[i]+=val;
    }
}
int query(int a,int b){
    int sum1=0,sum2=0;
    for(int i=a-1;i>0;i-=i&(-i)){
        sum1+=bit[i];
    }
    for(int i=b;i>0;i-=i&(-i)){
        sum2+=bit[i];
    }
    return sum2-sum1;
}
int bs(int a,int val){
    int low=a,high=n,ans=-1;
    int mid=low-(low-high)/2;
    while(low<high){
        int x=query(a,mid);
        if(x < val)low=mid+1;
        else{high=mid-1;ans=mid;}
    }
    return ans;
}
int main(){
    fastIO
    int n1,q;
    cin >>n1 >> q;
    n=n1;
    rep(i,0,n){int x;cin >>x;update(i+1,x);}
    while(q--){
        int x,a,b;
        cin >>x >> a >> b;
        if(x==1)update(a,b);
        else cout << bs(a,b);
    }
}