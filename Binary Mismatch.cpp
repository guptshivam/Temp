#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;
typedef vector<vector<pll>> vvpll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define endl "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define INF 2e18
#define all(v) (v).begin(), (v).end()
//is_sorted(all(v))
/*auto ip =unique(s.begin(),s.end());
  s.resize(distance(s.begin(), ip));*/
//int mx = *max_element(a.begin(), a.end());
//int cmx = count(a.begin(), a.end(), mx);
//(y<<x)->y*2^x
//(y>>x)->y/2^x
//sort(m[i].begin(),m[i].end(),greater<ll>());
//s.erase(start,start+nth)
//((f*=i)%=M);
// string x=s.substr(st,en+1);
// int cnt= count(st, en+1, c);
/*ll fact[200005];
ll pw(ll a,ll b){
	ll ans = 1;
	while (b > 0){
		if (b % 2 == 1){
			ans =ans* a;
			ans=ans% M;
		}
		b =b/ 2;
		a =a * a;
		a =a % M;
	}
	return ans;
}
ll inv(ll z){
	return pw(z, M-2);
}*/
void solve()
{
ll n;
cin>>n;
string s;
cin>>s;
if(n%2!=0)
{
  cout<<"NO"<<endl;
  return ;
}
int a1=-1,b1=-1;
ll ct1=0,ct0=0;
forn(i,n)
{
    if(s[i]=='1')
      ct1++;
}
ct0=n-ct1;
if(ct0==ct1)
{

   cout<<"YES"<<endl;
   cout<<"1 "<<n<<endl;
   return;
}
else if(ct1>ct0){
int a=(n/2)-ct0;
int cnt=0;
for(int i=0;i<n;i++)
{
    if(cnt==a)
    {
       cout<<"YES"<<endl;
       cout<<a1+1<<" "<<b1+1<<endl;
       return;
       break;
    }

    if(cnt<0)
    {
        a1=-1;
        b1=-1;
        cnt=0;
    }
    if(s[i]=='0')
    {

          cnt--;

       if(a1!=-1)
        {
            b1=i;
        }
        else
        {
            a1=i;
            b1=i;
        }
    }
    else
    {
        cnt++;
        if(a1!=-1)
        {
            b1=i;
        }
        else
        {
            a1=i;
            b1=i;
        }

    }
}
if(cnt>=a)
{
    cout<<"YES"<<endl;
    return;
}
}
else
{
int a=(n/2)-ct1;
int cnt=0;
for(int i=0;i<n;i++)
{
    if(cnt==a)
    {
       cout<<"YES"<<endl;
       cout<<a1+1<<" "<<b1+1<<endl;
       return;
       break;
    }
    if(cnt<0)
    {
        a1=-1;
        b1=-1;
        cnt=0;
    }
    if(s[i]=='1')
    {

          cnt--;

       if(a1!=-1)
        {
            b1=i;
        }
        else
        {
            a1=i;
            b1=i;
        }
    }
    else
    {
        cnt++;
        if(a1!=-1)
        {
            b1=i;
        }
        else
        {
            a1=i;
            b1=i;
        }

    }
}
if(cnt>=a)
{
    cout<<"YES"<<endl;
    return;
}
}
cout<<"NO"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
