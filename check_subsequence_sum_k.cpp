#include <bits/stdc++.h>
using namespace std;

bool ifExists(int idx, int s, vector<int> &nums, vector<int> &ans, int sum, int n)
{
  if (idx == n)
  {
    if (s == sum)
    {
      for (int i : ans)
      {
        cout << i << " ";
      }
      return true;
    }
    else
      return false;
  }
  ans.push_back(nums[idx]);
  s += nums[idx];
  if (ifExists(idx + 1, s, nums, ans, sum, n))
    return true;
  ans.pop_back();
  s -= nums[idx];
  if (ifExists(idx + 1, s, nums, ans, sum, n))
    return true;
  return false;
}

int main()
{
  vector<int> nums = {1, 2, 3};
  vector<int> ans;
  int n = 3;
  int sum = 2;
  ifExists(0, 0, nums, ans, sum, n);
}
