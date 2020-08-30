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
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	int m = 1000000007;
	cin>>n;
	int b, h;
	cin>>b>>h;
	int arr[n];
	int s=0;
	for(int i=0; i<n; i++)	
	{
		cin>>arr[i];
		s+=arr[i];
	}
	vector<int> brr;
	for(int i=0; i<n-1; i++)
	{
		int count=1;
		if(i!=n-1)
		{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]<=arr[j])
			count++;
			if(arr[i]>arr[j])
			break;
		}
		}
		if(i!=0)
		{
			for(int k=i-1; k>=0; k--)
			{
				if(arr[i]<=arr[k])
				count++;
				if(arr[i]>arr[k])
				break;
			}
		}
		brr.push_back(count*arr[i]);
	}
	int max = *max_element(brr.begin(), brr.end());
	cout<<((s-max)*b*h)%m<<endl;
 	return 0;
}

