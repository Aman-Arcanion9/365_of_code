#include <bits/stdc++.h>
using namespace std;
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long int
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define mii map<int,int>
#define set set<int>
#define vec vector<int>
#define pq priority_queue <int>
#define pqr priority_queue <int, vector<int>, greater<int>>
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
#define inf 1e18
#define ff first
#define ss second
#define For(i,a,b) for(int i=a;i<b;i++)
#define w(t) int t;cin>>t;while(t--)

//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move

int getfirstset(int n){
	return log2(n&-n);
}

int32_t main(){
	FastRead;
	int n;
	cin>>n;
	int*arr = new int[n];
	For(i,0,n)cin>>arr[i];
	int xorc=arr[0];
	For(i,1,n)xorc^=arr[i];
	int iset=getfirstset(xorc);
	int num1=0;
	For(i,0,n){
		if(iset==getfirstset(arr[i])){
			num1^=arr[i];
		}
	}
	int num2=xorc^num1;
	if(num1>num2){
		cout<<num2<<" "<<num1<<endl;
	}else{
		cout<<num1<<" "<<num2<<endl;
	}

	return 0;
}

