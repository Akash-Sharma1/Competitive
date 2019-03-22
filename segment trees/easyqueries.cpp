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

void build(vector<pi> &seg,int node,int arr[],int low,int high){
    if(low==high){
        if(arr[low]==1){
            seg[node].se=low;
            seg[node].fi=low;
        }
        return;
    }
    int mid=(low+high)/2;
    build(seg,2*node+1,arr,low,mid);
    build(seg,2*node+2,arr,mid+1,high);
    seg[node].fi=seg[2*node+1].se;
    seg[node].se=seg[2*node+2].fi;

    if(seg[node].fi==-1)seg[node].fi=seg[2*node+1].fi;
    if(seg[node].se==-1)seg[node].se=seg[2*node+1].se;
    //cout<<low<<" "<<high<<" "<<seg[node].fi <<" "<<seg[node].se<<endl;
}
void query(vector<pi> &seg,int low,int high,int node,int *a,int *b,int target){

    int mid=(low+high)/2;
    if(seg[node].fi!=-1 && seg[node].fi< target){
            *a=seg[node].fi;
        }
        if(seg[node].se!=-1 && seg[node].se>target){
            *b=seg[node].se;
    }
    if(low==high){
        return;
    }
    if(target<=mid){
        query(seg,low,mid,2*node+1,a,b,target);
    }
    else{
        query(seg,mid+1,high,2*node+2,a,b,target);
    }
}
void update(vector<pi> &seg,int low,int high,int node,int target){
    if(low==high){
        seg[node].fi=low;
        seg[node].se=low;
        return;
    }
    int mid=(low+high)/2;
    if(target<=mid){
        update(seg,low,mid,2*node+1,target);

    }
    else{
        update(seg,mid+1,high,2*node+2,target);
    }
    seg[node].fi=seg[2*node+1].se;
    seg[node].se=seg[2*node+2].fi;

    if(seg[node].fi==-1)seg[node].fi=seg[2*node+1].fi;
    if(seg[node].se==-1)seg[node].se=seg[2*node+1].se;
}
int main(){
    //fastIO
    int n,q;
    cin >> n >> q;
    int arr[n];
    rep(i,0,n){cin >>arr[i];}
    vector<pi> seg;//fi,se
    rep(i,0,4*n){seg.pb(mp(-1,-1));}
    build(seg,0,arr,0,n-1);
    while(q--){
        int a,b;
        cin >> a >> b;
        if(a==0){
            int *a1,*b1;
            *b1=-1;
            *a1=-1;
            query(seg,0,n-1,0,a1,b1,b);
            cout << *a1 <<" "<< *b1<<endl;
        }
        else{
            update(seg,0,n-1,0,b);
        }
    }
}
