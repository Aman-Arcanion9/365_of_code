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

int32_t main(){
    FastRead;
    int n,m;
    cin>>n>>m;
    int a[n];
    For(i,0,n)cin>>a[i];
    sort(a,a+n);
    int i=0;
    int sum=0;
    int x=n/m;
    int ind=1;
    for(;ind<=x-1;ind++){
        for(int j=0;j<m;j++){
            sum=(sum%mod+((ind%mod)*(a[i]%mod)%mod))%mod;
            i++;
        }
    }
    for(;i<n;i++){
        sum=(sum%mod+((ind%mod)*(a[i]%mod)%mod))%mod;
    }
    cout<<sum;
    return 0;
}
