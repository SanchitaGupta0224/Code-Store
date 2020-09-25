// 			Sieve of Eratosthenes 
//			input = n
// 			output = n is prime / not
// 			Compl = nlog(log n)
//  		Finding kth no. is prime or not 


#include<bits/stdc++.h>
#include<set>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define input_txt() freopen("input.txt", "r", stdin);
#define output_txt() freopen("output.txt", "w", stdout);
#define vec vector
#define lli long long int
#define test_lli ll t; cin>>t; while(t--)
#define test_int int t; cin>>t; while(t--)
#define ll long long
#define pb push_back
#define um unordered_map
#define vii vec<int, int>
#define vci vec<char, int>
#define vll vec<lli, lli>
#define m_p make_pair
const int mod=1000000007;

using namespace std;

/*

bool isPrime(int x)
{
	 if(x==1)
	 return false;
	 for(int i=2; i*i<=n; i++)
	 {
	  	if(x%i==0)
	  	{
			return false;
		}
	 }
	 return true;
}
*/


vec<int> v;
bool arr[90000001];			//All variables are initialized to false

void sieve()
{
	int maxN=90000000;
	arr[0]=arr[1]=true;		//true for not prime and false for prime
	
	for(int i=2; i*i<=maxN; i++)
	{
		if(!arr[i])
		{
			for(int j=i*i; j<=maxN; j+=i)
			{
				arr[j]=true;
			}
		}
	}
	for(int i=2; i<=maxN; i++)
	{
		if(!arr[i])
		v.pb(i);
	}
	
}

int main()
{
	IOS
//	input_txt()
//	output_txt()
	
	sieve();
	test_int
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}

	return 0;
}




/*

///////     //\       ///\    |||     ///////     ////    ///   |||||||||   ||||||||||    ///\
////       // \\	  /// \\  |||    //          ////    ///       ||          ||        //  \\
    ///   ///\\\\     ///  \\|||    //          ////||||///        ||          ||       ////\\\\
/////    /       \    ///   \\\|    ////////   ////    ///      ||||||||       ||      //       \


*/




