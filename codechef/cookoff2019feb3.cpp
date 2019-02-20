#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
int main(){
int t;
cin >>t;
while(t--){
    int n;
    cin >> n;
    string str;
    cin >> str;
    queue<pair<int,int> > que;
    unordered_map<int, int> mape;
    char alpha=str[0];
    int curr=0,temp=0,max=0,prev=0;
    for(int i=0 ;i<n;i++){
        if(str[i]==alpha){
            que.push(mp(i,0));
            mape[i]=1;
            max++;
        }
    }
    while(!str.empty()){
        if(que.front().second+1<n)alpha=str[que.front().second+1];
        if(que.front().first+1<n && str[que.front().first+1]==alpha){
            if(mape[que.front().first+1]==0){temp++;if(max<=temp){max=temp;curr=prev;}continue;}
            if(que.front().second+1==prev){temp++;if(max<=temp){max=temp;curr=prev;}}
            else{temp=1;prev=que.front().second+1;if(max<=temp){max=temp;curr=prev;}}
            que.push(mp(que.front().first+1,que.front().second+1));
        }
        que.pop();
    }
    for(int i=0;i<=curr&& i<n;i++){
        cout<<str[i]<<endl;
    }
}
}