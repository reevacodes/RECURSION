#include <bits/stdc++.h>
using namespace std;

void insertedSort(stack<int> &st, int x)
{
  if (st.empty() || st.top() <= x)
  {
    st.push(x);
    return;
  }

  int top = st.top();
  st.pop();
  insertedSort(st, x);
  st.push(top);
}

void sortStack(stack<int> &st)
{
  if (st.empty())
    return;
  int top = st.top();
  st.pop();

  sortStack(st);
  insertedSort(st, top);
}

int main()
{
  stack<int> st;
  st.push(30);
  st.push(-5);
  st.push(18);
  st.push(14);
  st.push(-3);

  sortStack(st);

  cout << "Sorted stack (top to bottom): ";
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}

// sortStack(st) → recursively removes elements until stack is empty, then inserts them back sorted using insertedSort.

// insertedSort(st, x) → inserts x into the stack in sorted order.