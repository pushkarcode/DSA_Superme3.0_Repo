#include <iostream>
#include <vector>
using namespace std;
int lower_bond(vector<int> &arr, int x)
{
  int start = 0, end = arr.size() - 1;
  int ans = end;
  while (start <= end)
  {
    int mid = (start + end) >> 1;
    if (arr[mid] >= x)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (x > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
}
void using_bsapproch(vector<int> &arr, int k, int x)
{
  int h = lower_bond(arr, x);
  int l = h - 1;
  while (k--)
  {
    if (l < 0)
    {
      h++;
    }
    else if (h >= arr.size())
    {
      l--;
    }
    else if (x - arr[l] > arr[h] - x)
    {
      h++;
    }
    else
    {
      l--;
    }
  }
  // return vector<int>(arr.begin() + l + 1, arr.begin() + h);
  for (int i = l + 1; i < h; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  //!-------------k-closest element------------
  vector<int> arr = {1, 2, 3, 4, 5};
  int k = 4, x = 3;
  using_bsapproch(arr, k, x);

  return 0;
}