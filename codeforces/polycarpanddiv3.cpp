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
    string str;
    cin >>str;
    int n=str.length();
    int count=0;
    rep(i,0,n){
        int sum=(int)str[i]-48;
        while(i<n && sum%3!=0 ){
            i++;
            if(((int)str[i]-48)%3==0){sum=(int)str[i]-48;break;}
            sum+=(int)str[i]-48;
        }
        if(sum%3==0){count++;}
    }
    cout <<count;
}