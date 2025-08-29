#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &st)
{
  if (st.empty())
    return;
  int top = st.top();
  st.pop();

  reverseStack(st);
  st.push(top);
}

int main()
{
  stack<int> st;
  st.push(30);
  st.push(-5);
  st.push(18);
  st.push(14);
  st.push(-3);

  reverseStack(st);

  cout << "Reversed stack : ";
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}
