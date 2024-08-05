#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,mi=INT_MAX,i,x,w,A[124121],a,b,j,d,res=0;
string s,s1;
int main() {
	cin >> n >> d >> x;

	for(i=1;i<=n;i++) {
		cin >> a;
    if(a==1) {
      res+=d;
    } else {
      res+=(d-1)/a+1;
    }
	}
	cout << res+x << endl;
  return 0;
}