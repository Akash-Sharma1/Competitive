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
    int t;
    cin >> t;
    while(t--){
        int zero=0;
        ll inf=1000000000;
        cout << 'Q'<<" "<< zero<<" "<<zero<<endl;
        ll d1,d2;
        cin >>d1;
        cout << 'Q'<<" "<< inf<<" "<<zero<<endl;
        cin >> d2;
        ll diff=d1-(inf-d2);
        diff/=2;
        diff=d1-diff;
        cout << 'Q'<<" "<< diff<<" " <<zero<<endl;
        ll y1,y2,x1,x2;
        cin >> y1;
        cout << 'Q'<<" "<< zero<<" " <<y1<<endl;
        cin >> x1;
        cout << 'Q'<<" "<< x1<<" " <<inf<<endl;
        cin >> y2;
        y2=inf-y2;
        cout << 'Q'<<" "<< inf<<" " <<y1<<endl;
        cin >> x2;
        x2=inf-x2;
        cout << 'A'<<" "<<x1 <<" "<<y1<<" "<<x2<<" "<<y2<<endl;
        int v;
        cin>> v;
        if(v<0)
            break;
    }
}