#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> primes;
void sieve(ll n)
{
    bool arr[n]={0};
    for(ll i=2;i<=n;i++)
    {
        if(!arr[i])
        {
            primes.push_back(i);
            for(ll j=i*i;j<=n;j+=i)
                arr[j]=1;
        }
    }
}
int main()
{
	ll n;
	cin>>n;
	sieve(n);
}

