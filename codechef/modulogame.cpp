#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n,p;
        cin >> n>> p;
        if(n==1 ||n==2){cout << p*p*p<<endl;continue;}
        long long x=(n/2)+1;
        x=n%x;
        if(p==n){cout << (n-x)*(n-x)<<endl;}
        else{
            cout << (p-x)*(p-x)+(p-n)*(p-x)+(p-n)*(p-n)<<endl;
        }
    }
}