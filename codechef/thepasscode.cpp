#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    //fastIO
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        rep(i,0,str.size()){
            if((int)str[i]-48 <=4){
                int x= (9-(int)str[i]-48);
                cout <<x;
            }
            else{
                cout << str[i];
            }
        }
        cout <<endl;
    }
}