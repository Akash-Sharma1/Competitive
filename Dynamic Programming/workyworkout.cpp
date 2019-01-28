#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (long long i=(l);i<(r);i++)
#define repd(i, l, r) for (long long i=(l);i>=(r);i--)
#define ll long long
#define mod 1000000009
#define pb push_back
#define mp make_pair
#define pii pair<long long,long long>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
double func(long long n,vector<string> &vect){
	if(n<vect.size()){return vect[n].size();}
	for(long long i=vect.size()-1;i<=n;i++){
		string str="";
		for(long long j=0;j<vect[i].length();j++){
			if(vect[i][j]=='N'){str+="NJ";}
			else{str+="N";}
		}
		vect.push_back(str);
	}
	return vect[n].size()%mod;
}
int main(){
    fastIO
	long long t;
	cin >> t;
	vector<string> vect; 
	vect.push_back("");
	vect.push_back("NJ");
	while(t--){
		long long n;
		cin >> n;
		cout << func(n,vect)<<endl;
	}
}