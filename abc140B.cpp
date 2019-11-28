#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n;
  cin>>n;
  ll a[n],b[n],c[n-1];
  ll ans=0;
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];
  }
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>b[i];
    ans+=b[i];
  }
  for (size_t i = 0; i < n-1; i++) {
    /* code */
    cin>>c[i];
  }
  for (size_t i = 0; i < n-1; i++) {
    /* code */
    if(a[i+1]-a[i]==1)
    {
      ans+=c[a[i]-1];
    }
  }
  cout<<ans<<"\n";
  return 0;
}
