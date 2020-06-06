#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
std::vector<ll> v1;
std::vector<ll> v2;
ll val[25];
int n;
ll res;
void go(int i)
{
if(i>=n){
ll s1=0;
ll res1=accumulate(v1.begin(), v1.end(), s1);
ll res2=accumulate(v2.begin(),v2.end(),s1);
res=min(abs(res1-res2),res);
 
}
else{
v1.push_back(val[i]);
go(i+1);
v1.pop_back();
v2.push_back(val[i]);
go(i+1);
v2.pop_back();
}
}
 
 
int main()
{
//#ifndef ONLINE_JUDGE
 
//freopen("input.txt", "r", stdin);
 
//freopen("output.txt", "w", stdout);
//#endif
scanf("%d",&n);
res=100000000000000000;
for (int i = 0; i < n; ++i)
{
	/* code */
	scanf("%lld",&val[i]);
}
go(0);
printf("%lld",res);
return 0;
 
}
