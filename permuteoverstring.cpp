#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
set<string> val;
void permute(string a, string b)
{
if(b.length()==0)
	{val.insert(a);}
else
{
string temp1,temp2;

for (int i = 0; i < b.length(); ++i)
{
	/* code */
temp1=a;
a+=b[i];
temp2=b;
b.erase(b.begin()+i);
permute(a,b);
a=temp1;
b=temp2;

}

}

}

int main()
{

//#ifndef ONLINE_JUDGE


//freopen("input.txt", "r", stdin);
    // for writing output to output.txt
//freopen("output.txt", "w", stdout);
//#endif

cin >> s;
sort(s.begin(), s.end());
permute("",s);
set<string>::iterator itr;
cout << val.size() << endl;
 for (itr = val.begin(); itr != val.end(); ++itr) 
    { 
        cout << *itr << endl; 
    } 
return 0;

}