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
    string str,tt;
    cin >>str >> tt;
    int n=str.length()-1;
    int m=tt.length()-1;
    int count=0;
    while(n >= 0 && m >= 0){
        if(str[n]==tt[m]){n--;m--;count++;}
        else{break;}
    }
    cout << str.length()+tt.length()-2*count;
}