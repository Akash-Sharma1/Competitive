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
bool isprime(int n){
    bool Prime = true;
  for(int i=2;i*i<=n;++i)
  {    if(n%i == 0)
      {Prime = false;
          break;
      }
  }
  return Prime;
}
int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        rep(i,0,n){cin >> arr[i];}
        int alice=0,bob=0,same=0;
        rep(i,0,n){
            if(isprime(arr[i])){same++;}
            else if(arr[i]%2==0){bob++;}
            else{alice++;}
        }
        if(same>0){alice++;}
        if(alice > bob){cout<<"Alice"<<endl;}
        else{cout << "Bob"<<endl;}
    }
}
