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
 //fastIO
    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;
    if(d==0){
        cout <<"Y "<<0.000000000 << " " <<0.000000000<<'\n';}
        else if(d*d-4*d<0){cout <<"N"<<endl;}
        else{
        cout << "Y ";
        double a1;
        a1=(d+sqrt(d*d-4*d))/2.0;
        if(d>2)cout <<fixed<< std::setprecision(9) << a1 << " " <<d-a1<<'\n';
        }
    }
}