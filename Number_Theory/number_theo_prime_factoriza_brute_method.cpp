//			Number Theory
//			Prime Factorisation
//			input = 100 (2^2 * 5^2)
//			output= 2,2,5,2
//			Solving using brute method
//			Complex = log(n) ==> base i
// 			Worst case = n is prime no.    O(n)


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

void primeFac(int n)
{
	for(int i=2; i*i<=n; i++) 		//complexity now is O(sqrt(n))
	
		if(n%i==0)
		{
			int cnt=0; 
			while(n%i==0)
			{
				cnt++;
				n=n/i;
			}	
			cout<<i<<" "<<cnt<<endl;
		}
		if(n>1)
		cout<<n<<" "<<1<<endl;
	
}

int main()
{
	IOS
//	input_txt()
//	output_txt()
	test_int
	{
		int n;
		cin>>n;
		primeFac(n);
	}
	

	return 0;
}




/*

///////     //\       ///\    |||     ///////     ////    ///   |||||||||   ||||||||||    ///\
////       // \\	  /// \\  |||    //          ////    ///       ||          ||        //  \\
    ///   ///\\\\     ///  \\|||    //          ////||||///        ||          ||       ////\\\\
/////    /       \    ///   \\\|    ////////   ////    ///      ||||||||       ||      //       \


*/




