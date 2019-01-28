#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define mod 100000
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fastIO
    int user,ans,n;
    cin >> user >> ans >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    queue<int> que;
    que.push(user);
    que.push(-1);
    int count=1;
    int flag=0;
    while(!que.empty() && flag==0){
        int temp=que.front();
        que.pop();
        if(temp==-1){count++;que.push(-1);continue;}
        if(temp==ans){break;}
        for(int i=0;i<n;i++){
            int newint=((temp%mod)*(arr[i]%mod))%mod;
            if(newint==ans){break;flag=1;}
            que.push(newint);
        }
    }
    cout << count;
}