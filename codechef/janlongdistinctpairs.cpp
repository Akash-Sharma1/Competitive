#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    set<int, greater <int> > s1,s2,s3;
    pair<int,int> ans[n+m-1];
    for(int i=0;i<n;i++){cin >> a[i];   s1.insert(a[i]);}
    for(int i=0;i<m;i++){cin >> b[i];   s2.insert(b[i]);}
        for(auto i=s1.begin();i!=s1.end() && s3.size()<n+m-1;i++){
            for(auto j=s2.begin();j!=s2.end() && s3.size()<n+m-1;j++){
                if(s3.find(*i+*j)==s3.end()){
                    ans[s3.size()]=make_pair(*i,*j);
                    s3.insert(*i+*j);
                }
            }
        }
    for(auto i=0;i<n+m-1;i++){
        cout << ans[i].first <<" "<< ans[i].second <<endl;
    }
    
    }