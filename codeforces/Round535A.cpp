#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        string s;
        s=str.substr(1,n);
        int i=1;
        while(i<n && s[i]=='0'){i++;}
        int diff=n-i;
        if(diff==0){cout << "NO"<<endl;continue;}
        int one=str[0]-48;
        int two=str[n-1]-48;
        if(s.size()==1 || diff==1){
            if(two > one){
                cout << "YES\n2\n"<<str[0]<<" "<<s<<endl;
            }
            else{cout << "NO"<<endl;}
        }
        else{
            cout <<"YES\n2\n"<< one <<" "<< s<<endl;
        }
    }
}