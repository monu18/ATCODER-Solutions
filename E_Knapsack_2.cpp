//please refer from line no. 207
/////*31022618*/////
//_MONU KUMAR
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define tc ll t=1; cin>>t; while(t--)
#define ll long long int
#define ld long double
#define ull unsigned long long
#define p1(x) cout <<x<<"\n";
#define p2(x,y) cout <<x<<" "<<y<<"\n";
#define p3(x,y,z) cout <<x<<" "<<y<<" "<<z<<"\n";
#define p4(x,y,z,w) cout <<x<<" "<<y<<" "<<z<<" "<<w<<"\n";
#define trace(x) cout<<#x<<": "<<x<<" "<<"\n";
#define trace2(x,y) cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<"\n";
#define trace3(x,y,z) cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<"\n";
#define trace4(a,b,c,d) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n";
#define nL cout<<"\n";
#define lp(i,l,r) for (long long int i = l; i < r; i++)
#define lpr(i,r,l) for (long long int i = r-1; i >=l ; i--)
#define mem(a,x) memset(a,x,sizeof(a))              //set elements of array to some value
#define pi 3.1415926535897932384626
#define mod 1000000007
#define big 1e18
#define small -big
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define siz 256
#define leadzero(a) __builtin_clz(a)        // count leading zeroes
#define trailzero(a) __builtin_ctz(a)       // count trailing zeroes
#define bitcount(a) __builtin_popcount(a)   // count set bits
#define all(v) v.begin(),v.end()
#define lps(v,x) (lower_bound(all(v),x)-v.begin())
#define ups(v,x) (upper_bound(all(v),x)-v.begin())
#define ina(a,n) ll a[n]; lp(i,0,n) cin>>a[i];
#define ona(a,n) lp(i,0,n) cout<<a[i]<<" ";

ll dp[110][110000], we[110], v[110];

int main() {
    fast
    ll n, w;
    cin >> n >> w;
    lp(i,1,n+1) {
        cin >> we[i] >> v[i];
    }

    lp(i,1,110000) {
        dp[0][i] = big;
    }

    lp(i,1,n+1)
     {
        lp(j,1,110000)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - v[i] >= 0)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j - v[i]] + we[i]);
            }
        }
    }
    ll ans = 0;
    lp(i,0,110000) {
        if (dp[n][i] <= w) {
            ans = max(ans, i);
        }
    }
    p1(ans)



  //clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
  return 0;
}
//////////*********************end of program*********************//////////
