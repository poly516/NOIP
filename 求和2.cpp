#include<algorithm>
#include<clocale>
#include<cmath>
#include<complex>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<deque>
#include<iostream>
#include<istream>
#include<map>
#include<math.h>
#include<ostream>
#include<queue>
#include<set>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
long long n,m,b[100010],a[100010],ans;
vector<long long> v[100010];
int main(){
	cin>>n>>m;
	for (long long i=1;i<=n;i++) cin>>a[i];
	for (long long i=1;i<=n;i++) cin>>b[i];
	for (long long i=1;i<=n;i++) v[b[i]].push_back(i);
	for (long long i=1;i<=m;i++) sort(v[i].begin(),v[i].end());
	for (long long i=1;i<=m;i++)
		for (long long j=0;j<v[i].size();j++)
			for (long long k=j+1;k<v[i].size();k++)
				if ((v[i][k]-v[i][j])%2==0) ans=(ans+(v[i][k]+v[i][j])*(a[v[i][k]]+a[v[i][j]]))%10007;
	cout<<ans%10007<<endl;
	return 0;
}
