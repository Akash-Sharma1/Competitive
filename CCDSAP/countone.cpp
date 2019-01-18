#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long count=0;
        for(long long i=0;i<n;i++){
            if(s[i]=='1'){count++;}
        }
        cout << count*(count+1)/2<<endl;
    }

}