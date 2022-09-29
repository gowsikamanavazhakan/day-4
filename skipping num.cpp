#include<iostream>
using namespace std;
int main ()
{
  int m, n, i, k;
  cout << " M : ";
  cin >> m;
  cout << " N : ";
  cin >> n;
  cout << " K : ";
  cin >> k;
  if ((n < m) || k < 0 || m == n)
    {
      cout << "invalid";
    }
  else
    for (i = m; i <= n; i++)
      {
	cout << i << "  ";
	i = i + k;
      }
  cout << endl;
  return 0;
}
