#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string path;

int res;
int v[8][8];
bool isSafe(char p,int pos)
{
	if(path[pos]=='?')
		return true;
	else if (path[pos]==p)
	{
		/* code */
		return true;
	}

	return false; 

}
void go(int i, int j, int pos)
{
if(v[i][j])
{;}
else if(pos >= path.length() && i==6 && j==0 && !v[i][j])
{
	/* code */


	res++;

}

else if (i>=7 || j>=7 || i<0 || j<0)
{
	;
}

else
{
v[i][j]=1;
if(i+1 <7 && isSafe('D',pos) && !v[i+1][j])
	go(i+1,j,pos+1);
if(j+1 <7 && isSafe('R',pos) && !v[i][j+1])
    go(i,j+1,pos+1);
if(j-1 >=0 && isSafe('L',pos) && !v[i][j-1])
	go(i,j-1,pos+1);
if (i-1 >=0 && isSafe('U',pos) && !v[i-1][j])
    go(i-1,j,pos+1);
v[i][j]=0;


}

}
int main()
{
#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);
#endif
cin >> path;
res=0;
go(0,0,0);

printf("%d\n",res);


return 0;

}