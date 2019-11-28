#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n;
  cin>>n;
  ll b[n-1];
  ll ans=0;
  ll sum=0;
  for (size_t i = 0; i < n-1; i++) {
    /* code */
    cin>>b[i];
  }
  ans+=b[0];
  for (size_t i = 0; i < n-2; i++) {
    /* code */
    ll xx=(min(b[i],b[i+1]));
    ans+=xx;
  }
  ans+=b[n-2];
  cout<<ans<<"\n";
  return 0;
}
