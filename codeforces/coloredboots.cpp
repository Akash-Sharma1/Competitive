#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pub push_back
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
    int n;
    cin >> n;
    string strleft;
    string strright;
    cin  >> strleft >>strright;
    vector<int> left[28],right[28];
    rep(i,0,n){
        if(strleft[i]=='?') left[27].pub(i);
        else
            left[(int)strleft[i]-97].pub(i);

        if(strright[i]=='?') right[27].pub(i);
        else
            right[(int)strright[i]-97].pub(i);
    }
    vector<pi> v;
    rep(i,0,27){
        while(left[i].size()>0 && right[i].size()>0){
            v.push_back(mp(left[i][left[i].size()-1],right[i][right[i].size()-1]));
            //cout << left[i][left[i].size()-1]<<" "<<right[i][right[i].size()-1]<<endl;
            left[i].pop_back();
            right[i].pop_back();
        }
    }
    for(int j=0;j<28 && left[27].size()>0;j++){
            while(right[j].size()>0 && left[27].size()>0){
                v.push_back(mp(left[27][left[27].size()-1],right[j][right[j].size()-1]));
                left[27].pop_back();
                right[j].pop_back();
            }
    }
    for(int j=0;j<28 && right[27].size()>0;j++){
            while(left[j].size()>0 && right[27].size()>0){
                v.push_back(mp(left[j][left[j].size()-1],right[27][right[27].size()-1]));
                left[j].pop_back();
            right[27].pop_back();
            }
    }
    cout << v.size()<<endl;
    n=v.size();
    rep(i,0,n){
        cout << v[i].first+1<<" "<<v[i].second+1 <<endl;
    }
}
