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

  string x, y; cin >> x >> y;

  int len = x.length() > y.length() ? y.length() : x.length();
  int i;
  fo(i, len) {
    if (x[i] == y[i]) {
      continue;
    }
    else if (x[i] > y[i]) {
      cout << y;
      return 0;
    }
    else {
      cout << x;
      return 0;
    }
  }
  if (x.length() > y.length()) {
    cout << y;
    return 0;

  }
  cout << x;

  return 0;
}