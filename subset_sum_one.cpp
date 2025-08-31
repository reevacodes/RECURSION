#include <bits/stdc++.h>
using namespace std;

void subsetSum(int idx, int target, vector<int> &arr, vector<int> &sum)
{
  if (idx == arr.size())
  {
    sum.push_back(target);
    return;
  }

  // pick
  subsetSum(idx + 1, target + arr[idx], arr, sum);

  // Not Pick
  subsetSum(idx + 1, target, arr, sum);
}

int main()
{
  vector<int> arr = {3, 1, 2};
  vector<int> sum;
  subsetSum(0, 0, arr, sum);
  sort(sum.begin(), sum.end());
  for (int s : sum)
  {
    cout << s << " ";
  }
  return 0;
}