#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll unsigned long long
#define fi first
#define se second
#define be begin()
#define pub push_back
#define en end()
//memset(dp,1000000,sizeof(ll)*1000001);
#define le length()
#define mp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    int  t;
    cin >>t;
    while(t--){
        int  n=0;
        cin >>n;
        ll  arr[n];
        rep(i,0,n){cin >>arr[i];}
        ll moves[n]={0};
        moves[0]=1;
        ll data[n]={0};
        data[0]=1;
        if(t==0){
            //
            int k=0;
        }
        int count=1;
        rep(i,1,n){
            ll  prev=0;
            ll  temp=0;
            ll  d=data[i-1];
            if(i-2>=0 && arr[i-2]==2){
                if(i-3>=0&&arr[i-3]==2){prev=(prev%(1000000000+7)+data[i-3]%(1000000000+7)+data[i-2]%(1000000000+7))%(1000000000+7);}
                else {prev=(prev%(1000000000+7)+data[i-2]%(1000000000+7))%(1000000000+7);}
            }
            prev=(prev%(1000000000+7)+data[i-1]%(1000000000+7))%(1000000000+7);
        count--;
        if(count<=1000){
                count=0;
            if(arr[i-1]==2){
                ll j=i+1;
                while(j<n){
                    if(j<n && arr[j]==1){
                        count++;
                        if(j+1<n && arr[j+1]==2){
                            count++;
                        }
                        break;
                    }
                    else if(j<n && arr[j]==2){
                        count++;
                        if(j+1<n && arr[j+1]==2){
                            count++;
                        }
                        else{break;}
                        j+=2;
                    }
                }
            }
        }
            temp=(d%(1000000000+7)*count%(1000000000+7))%(1000000000+7);
            data[i]=prev;
            moves[i]=(temp%(1000000000+7)+data[i]%(1000000000+7))%(1000000000+7);
        }
        ll sum=0;
        rep(i,0,n){sum+=moves[i];sum%=(1000000000+7);}
        cout <<sum<<endl;
    }

}
