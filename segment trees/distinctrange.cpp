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
int left(int i){return 2*i+1;};
int right(int i){return 2*i+2;}
int parent(int i){return i/2;}
int seg[maxN];
set<int> build(int arr[],int brr[],int start,int low,int high){
    if(low==high){
        set<int> st;
        st.insert(arr[low]);
        st.insert(arr[start]);
        seg[start]=st.size();
        return st;
    }
    int mid=(low+high)/2;
    set<int> st1=build(arr,brr,left(start),low,mid);
    set<int> st2=build(arr,brr,right(start),mid+1,high);
    for(auto itr=st1.begin();itr!=st1.end();itr++){
        st2.insert(*itr);
    }
    seg[start]=st2.size();
    return st2;
}

int main(){
    fastIO
    int n;
    cin >> n;
    int a[n],b[n];
    rep(i,0,n){cin >> a[i];}
    rep(i,0,n){cin >> b[i];}
    int q;
    cin >> q;
    build(a,b,0,0,n);
    while(q--){
        int x,y,l,r;
        cin >> x >> y >> l>> r;
        find(x,y,l,r);
    }
}