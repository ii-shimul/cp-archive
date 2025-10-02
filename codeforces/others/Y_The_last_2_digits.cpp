#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define clr(x) memset(x, 0, sizeof(x))
#define PI 3.1415926535897932384626

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ll a, b, c, d; cin >> a >> b >> c >> d;
  a %= 100;
  b %= 100;
  c %= 100;
  d %= 100;
  ll m = a * b * c * d;
  ll ans = m % 100;
  if (ans == 0) {
    ps("00");
    return 0;
  }
  else if (ans < 10) {
    printf("0%lld", ans);
    return 0;
  }
  pl(ans);

  return 0;
}