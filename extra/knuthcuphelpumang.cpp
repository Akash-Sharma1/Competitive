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
#define le length()
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;
void computeLPSArray(string pat, int* lps) 
{ int len = 0; 
    lps[0] = 0;
    int M=pat.length();
    int i = 1; 
    while (i < M) {
        if (pat[i] == pat[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        }
        else
        {   if (len != 0) { len = lps[len - 1]; } 
            else{  lps[i] = 0; i++; } 
        } 
    } 
} 
int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int n=str.length();
        int lps[n];
        computeLPSArray(str,lps); 
        if(lps[n-1]==0){cout << -1<<endl;continue;}
        int same=lps[n-1];
        int count=0;
        rep(i,0,n){
            if(lps[i]==same){count++;}
        }
        rep(i,0,same){cout <<str[i];}
        cout <<endl;
        cout <<count+1<<endl;
    }
}