#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
string rever(string str,int j,int n){
    string temp;
    for(int i=j;i>=0;i--){
        temp+=str[i];
    }
    for(int i=j+1;i<n;i++){temp+=str[i];}
    return temp;
}
int main(){
    int n;
    cin >> n;
    string str;
    string ans;
    for(int i=0;i<n;i++){char s; cin >> s; str+=s;ans+=(char)(i+1);}
    map<string,int> mape;
    queue<pair<string,int> > que;
    que.push(mp(str,0));
    que.push(mp("",-1));
    int count=0;
    while(!que.empty()){
        string temp=que.front().first;
        int level=que.front().second;
        if(temp==ans){count=level;break;}
        que.pop();
        if(level==-1){count++;que.push(mp("",-1));continue;}
        for(int i=1;i<n;i++){
            string newstr=rever(temp,i,n);
            if(mape[newstr]==1){continue;}
            mape[newstr]=1;
            que.push(mp(newstr,count));
        }
    }
    cout << count;
}