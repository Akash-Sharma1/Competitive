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
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    int a,b,c;
    cin >> a >> b >> c;
    int green, purple, black;
    cin >> green >> purple >> black;
    if(a> green){cout <<"NO";return 0;}
    else{green-=a;}
    int total=green+purple+black;
    if(b>green+purple){cout << "NO";return 0;}
    else{
        total=total-b;
    }
    if(c > total){cout<<"NO"; return 0;}
    cout <<"YES";
}