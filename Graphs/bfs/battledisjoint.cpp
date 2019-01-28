#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int arr[n][m];
        int visit[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> arr[i][j];
                visit[i][j]=0;
            }
        }
        int count=0,maxx=0;
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visit[i][j]==0 && arr[i][j]==1){
                    int temp=0;
                    queue<pair<int,int> > que;//i and j
                    que.push(mp(i,j));
                    while(!que.empty()){
                        int a=que.front().first;
                        int b=que.front().second;
                        que.pop();
                        if(a+1 < n && arr[a+1][b] && !visit[a+1][b]){ temp++;    visit[a+1][b]=1;    que.push(mp(a+1,b));}
                        if(a-1 >=0 && arr[a-1][b] && !visit[a-1][b]){ temp++;    visit[a-1][b]=1;    que.push(mp(a-1,b));}
                        if(b+1 < m && arr[a][b+1] && !visit[a][b+1]){ temp++;    visit[a][b+1]=1;    que.push(mp(a,b+1));}
                        if(b-1 >=0 && arr[a][b-1] && !visit[a][b-1]){ temp++;    visit[a][b-1]=1;    que.push(mp(a,b-1));}
                        if(b+1 < m && a+1 < n && arr[a+1][b+1] && !visit[a+1][b+1]){ temp++;    visit[a+1][b+1]=1;    que.push(mp(a+1,b+1));}
                        if(b-1 >=0 && a+1 < n && arr[a+1][b-1] && !visit[a+1][b-1]){ temp++;    visit[a+1][b-1]=1;    que.push(mp(a+1,b-1));}
                        if(b+1 < m && a-1 >=0 && arr[a-1][b+1] && !visit[a-1][b+1]){ temp++;    visit[a-1][b+1]=1;    que.push(mp(a-1,b+1));}
                        if(b-1 >=0 && a-1 >=0 && arr[a-1][b-1] && !visit[a-1][b-1]){ temp++;    visit[a-1][b-1]=1;    que.push(mp(a-1,b-1));}
                    }
                    count++;
                    maxx=max(maxx,temp);
                }
            }
        }
        cout<<count<<" "<<maxx<<endl;
    }
}
