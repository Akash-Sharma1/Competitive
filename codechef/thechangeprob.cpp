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
    fastIO
    int n;
    cin >> n;
    int fifty=0,hund=0,twohund=0;
    int flag=0;
    int arr[n];
    rep(i,0,n){cin >> arr[i];}
    rep(i,0,n){
        int x=arr[i];
        if(x==50){fifty++;}
        else if(x==100){
            hund++;
            if(fifty>=1){
                fifty--;
            }
            else{
                flag=1;
                break;
            }
        }
        else{
            twohund++;
            if(hund>=1 && fifty>=1){
                hund--;
                fifty--;
            }
            else if(fifty>=3){
                fifty-=3;
            }
            else{
                flag=1;
                break;
            }
        }
    }
    if(flag==0){cout << "YES";}
    else{cout <<"NO";}
}