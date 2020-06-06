#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string board[8];

int res;
bool isSafe(int row, int col)
{
int i,j;
if(board[row][col]=='*')
 return false;

for (i = row-1; i >=0; --i)
{
	/* code */
	if(board[i][col]=='q')
		return false;
}
for (i = row-1,j=col-1; i >=0, j >=0; --i,--j)
{
	/* code */
	if(board[i][j]=='q')
		return false;
}

for (i = row-1,j=col+1; i >=0, j <8; --i,++j)
{
	/* code */
	if(board[i][j]=='q')
		return false;
}

return true;

}
void go(int row)
{
 if(row>=8)
 {
 	res++;
 
 }
else
{
for (int i = 0; i<8 ; ++i)
{
	/* code */
	if (isSafe(row,i))
	{
		/* code */
		board[row][i]='q';
		go(row+1);
		board[row][i]='.';


	}

}


}

}


int main()
{
#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);
#endif

for(int i=0;i<8;i++)
    cin >> board[i];
    //output
res=0;
go(0);
cout<<res<<endl;
return 0;

}