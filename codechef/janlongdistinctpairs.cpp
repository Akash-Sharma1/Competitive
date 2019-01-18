#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    map<int,int> ma,mb;
    for(int i=0;i<n;i++){cin >> a[i];ma[a[i]]=i;}
    for(int i=0;i<m;i++){cin >> b[i];mb[b[i]]=i;}
    sort(a,a+n);
    sort(b,b+m);
    if(n>m){
        for(int i=0;i<m;i++){
            cout<<ma[a[i]]<<" "<<mb[b[i]]<<endl;
        }
        for(int i=m;i<n;i++){
            cout<<ma[a[i]]<<" "<<mb[b[i]]<<endl;
        }
        for(int i=0;i<m-1;i++){
            cout<<ma[a[i]]<<" "<<mb[b[i+1]]<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<ma[a[i]]<<" "<<mb[b[i]]<<endl;
        }
        for(int i=n;i<m;i++){
            cout<<ma[a[i]]<<" "<<mb[b[i]]<<endl;
        }
        for(int i=0;i<n-1;i++){
            cout<<ma[a[i]]<<" "<<mb[b[i+1]]<<endl;
        }
    }
}
