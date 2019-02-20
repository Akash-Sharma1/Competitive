#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define s second
#define f first
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
        int n=str.length();
        vector<int> freq;
        rep(i,0,26){freq.pb(0);}
        rep(i,0,n){freq[str[i]-65]++;}
        int dist=0;
        rep(i,0,26){if(freq[i]>0)dist++;}
        sort(freq.begin(),freq.end(),greater<int>());
        int ans=abs(freq[0]-n);
        rep(i,1,27){
            if(n%i!=0){continue;}
            int diff=0;
            int avg=n/i;
            int j=0;
            //cout <<i <<" "<<avg<<endl;
            //rep(k,0,26){cout <<freq[k]<<"-";}
            //cout <<endl;
            int h=1;
            int k=max(i,dist);
            while(k--){
                if(h>i){avg=0;}
                diff+=abs(freq[j]-avg);
                j++;
                h++;
            }
            diff/=2;
            //cout <<diff<<endl;
            ans=min(diff,ans);
        }
        cout<<ans<<endl;
    }
}
/*
10
AAAABBBBBB
AACBBBJH

*/
