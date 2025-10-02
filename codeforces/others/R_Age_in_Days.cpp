#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define d double
#define f float
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define clr(x) memset(x, 0, sizeof(x))
#define PI 3.1415926535897932384626

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ll days; sl(days);
  ll years = days / 365;
  days %= 365;
  ll months = days / 30;
  days %= 30;
  cout << years << " years\n" << months << " months\n" << days << " days";
  return 0;
}