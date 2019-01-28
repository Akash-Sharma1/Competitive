#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m[n],w[n];
        for(int i=0;i<n;i++){
            cin >> m[i];
        }
        for(int i=0;i<n;i++){
            cin >> w[i];
        }
        sort(m,m+n);
        sort(w,w+n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=m[i]*w[i];
        }
        cout << sum<<endl;
    }
}