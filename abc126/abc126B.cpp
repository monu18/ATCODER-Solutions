//mOzis_
/////*31022618*/////
//****//MONU KUMAR\****//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define lp(i,l,r) for (long long int i = l; i < r; i++)
#define mem(a,x) memset(a,x,sizeof(a))              //set elements of array to some value
#define pi 3.1415926535897932384626
#define mod 1000000007
#define pb(x) push_back(x)
#define ff first
#define ss second
#define siz 256                        //characters are stored using 8 bit and there can be
bool anagram(char *s1, char *s2)     //256 possible characters only in lowercase alphabet
{
	ll count[siz];
    mem(count,0) ;
    ll i;
    for (i = 0; s1[i] && s2[i];  i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    if (s1[i] || s2[i])
    {
      return false;
    }
    lp(i,0,siz)
    {
    	 if (count[i])
    	 {
    	 	 return false;
    	 }
    }
     return true;

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string s;
	cin>>s;
	ll s2=0,s3=0;
	ll ss=stoi(s);
	s2+=ss%10;
	ss/=10;
	s2+=(ss%10)*10;
	ss/=10;
	s3=ss;
	ll s1=12;
	if (s2<=s1 && s3<=s1 )
	{
        if(s2>0 && s3==0)
        {
           cout<<"YYMM"<<"\n";
        }
        else if(s3>0 && s2==0)
        {
            cout<<"MMYY"<<"\n";
        }
        else if(s3==0 && s2==0)
        {
            cout<<"NA"<<"\n";
        }
        else
        {
            cout<<"AMBIGUOUS"<<"\n";
        }

	}
	else if (s2<=s1 && s3>s1 && s2>0 )
	{
		cout<<"YYMM"<<"\n";
	}
	else if (s2>s1 && s3<=s1 && s3>0)
	{
		cout<<"MMYY"<<"\n";
	}
	else

	{
		cout<<"NA"<<"\n";
	}


	return 0;
}
//////////*********************end of program*********************//////////
