#include<bits/stdc++.h>
#define ll long long
#define rep(i, l, r) for (int i=(l);i<(r);i++)
using namespace std;
void addedge(vector<int> v[],int a,int b){
    v[a].push_back(b);
}
int power(int x, unsigned int y, ll p) 
{ 
    int res = 1;
    x = x % p;
    while (y > 0){ 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
} 
int bfs(vector<int> v[],int u,int x){
    queue<int> que;
    que.push(u);
    que.push(-1);
    ll sum=0;
    int c=0,dist=0;
    while(!que.empty()){
        int n=que.front();
        que.pop();
        if(n==-1){
            if(que.empty())
                break;
            que.push(-1);
            dist++;
            continue;
        }
        sum+=(dist%(1000000000+7)*(int)power(x,c,1000000000+7)%(1000000000+7))%(1000000000+7);
        c++;
        rep(i,0,v[n].size()){
            que.push(v[n][i]);
        }
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>> n>>q;
        vector<int> v[n+10];
        rep(i,1,n){
            int a,b;
            cin>>a>>b;
            addedge(v,a,b);
        }
        ll ans=0;
        while(q--){
            int u,x;
            cin>> u>>x;
            u^=ans;
            x^=ans;
            ans=bfs(v,u,x);
            cout<<ans<<endl;
        }
    }
}