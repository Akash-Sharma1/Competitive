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
    int n,a,b;
    cin >> n >> a >> b;
    int gap=2,c=0;
    for(gap=2;gap<=256;gap*=2){
        c++;
        int rem=0;
        int upper=0;
        if(a%gap!=0){upper=(a/gap+1)*gap;}
        else{upper=a;}
        int lower=upper-gap+1;
   // cout <<lower<<"  "<<upper<<endl;
        if(upper>=a && lower<=a && upper>=b && lower<=b){
            if(gap==n)cout <<"Final!";
            else cout <<c;
            break;
        }
    }
    return 0;
}
