#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n1,n2,m;
        cin >> n1 >> n2 >> m;
        long long minn;
        minn=min(n1,n2);
        minn=min(m*(m+1)/2,minn);
        n1-=minn;
        n2-=minn;
        cout<< n1+n2<<endl;
    }
}
