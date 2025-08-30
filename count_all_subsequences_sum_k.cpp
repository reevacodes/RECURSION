#include <bits/stdc++.h>
using namespace std;

int countSubsequences(vector<int> &nums, int sum, int s, int idx)
{
  if (idx == nums.size())
  {
    if (s == sum)
      return 1;
    else
      return 0;
  }

  s += nums[idx];
  int l = countSubsequences(nums, sum, s, idx + 1);
  s -= nums[idx];
  int r = countSubsequences(nums, sum, s, idx + 1);
  return l + r;
}

int main()
{
  vector<int> nums = {1, 2, 1};
  int sum = 2;
  cout << countSubsequences(nums, sum, 0, 0);
}