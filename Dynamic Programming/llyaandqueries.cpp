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
    string str;
    cin >>str;
    int m;
    cin >> m;
    int n=str.length();
    int arr[n]={0};
    rep(i,1,n){
        if(str[i-1]==str[i]){arr[i]+=arr[i-1]+1;}
        else{arr[i]=arr[i-1];}
    }
    rep(i,0,m){
        int l,r;
        cin >> l >> r;
        l--;r--;
        cout<<arr[r]-arr[l]<<endl; 
    }
}