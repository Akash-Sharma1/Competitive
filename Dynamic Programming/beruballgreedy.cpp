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
    int n,m;
    cin >> n;
    int arr[n];
    rep(i,0,n){cin >>arr[i];}
    cin >> m;
    int brr[m];
    rep(i,0,m){cin >>brr[i];}
    sort(arr,arr+n);
    sort(brr,brr+m);
    int i=0,j=0,count=0;
    while(i<n && j<m){
        if(abs(arr[i]-brr[j])<=1){count++;i++;j++;}
        else{
            if(arr[i]<brr[j])i++;
            else j++;
        }
    }
    cout<< count;
}