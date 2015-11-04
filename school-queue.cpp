#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <limits>
#include <bitset>
#include <time.h>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <iostream>
#include <sstream>

using namespace std;

#define MOD 1000000007LL
#define LL long long
#define LD long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))

#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)

const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;

	
int main()
{
	int n,t;
	scanf("%d %d",&n,&t);
	string s,d;
	cin>>s;
	d=s;
	REP(j,t)
	{
		REP(i,s.length())
		{
			if(s[i+1]=='G' && s[i]=='B')
			{
				d[i]='G';
				d[i+1]='B';
					
			}
		}
		s=d;
	}
	cout<<s;
	return 0;
}
