#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pb push_back
#define en end()
//memset(dp,1000000,sizeof(int)*1000001);
#define le length()
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int digit[32]={0};
        rep(i,0,n){
            string str;
            cin >>str;
            int alpha[5]={0};
            rep(i,0,(int)str.length()){
                if((int)str[i]==97)
                    alpha[4]=1;//a
                else if((int)str[i]==101)
                    alpha[3]=1;//e
                else if((int)str[i]==105)
                    alpha[2]=1;//i
                else if((int)str[i]==111)
                    alpha[1]=1;//o
                else if((int)str[i]==117)
                    alpha[0]=1;//u
            }
            int s=0;
            rep(i,0,5){
                if(alpha[i])    s+=pow(2,i);
            }
            digit[s]++;
            //aeiou
        }
        int sum=0;
        rep(i,1,32){
            if(digit[i]){
                if(i==31){sum+=(digit[31]-1)*(digit[31])/2;}
                rep(j,i+1,32){
                    if(digit[j]>0 && (i|j)==31){
                        sum+=digit[i]*digit[j];
                    }
                }
            }
        }
        cout <<sum<<endl;
    }
}
