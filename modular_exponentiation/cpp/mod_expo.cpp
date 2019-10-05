#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll a, ll b, ll m)
{
	if(b==1)
		return a % m;
	ll temp = power(a,b/2,m);
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp= (a * temp) % m;
	return temp;
} 
int main()
{
	// power function returns (a ^ b) % m;      
}
