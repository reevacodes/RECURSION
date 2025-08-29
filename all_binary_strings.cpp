#include <bits/stdc++.h>
using namespace std;

void generateAllBinary(int n, string s)
{
  if (s.length() == n)
  {
    cout << s << endl;
    return;
  }
  generateAllBinary(n, s + "0");
  generateAllBinary(n, s + "1");
}

int main()
{
  int n;
  cin >> n;
  generateAllBinary(n, "");
}