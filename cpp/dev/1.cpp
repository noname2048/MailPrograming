// Question

// 정수 배열(int array)가 주어지면 가장 큰 이어지는 원소들의 합을 구하시오. 단,
// 시간복잡도는 O(n). Given an integer array, find the largest consecutive sum
// of elements.

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int f(vector<int> &arr) {
  int max_sum = arr[0];
  int current_sum = arr[0];

  for (int i = 1; i < arr.size(); i++) {
    current_sum = max(current_sum + arr[i], arr[i]);
    max_sum = max(current_sum, max_sum);
  }
  return max_sum;
}

int main() {
  vector<int> arr{2, 3, 4, 5, -6};
  int ans = f(arr);
  cout << ans << endl << flush;

  cin.ignore();
  cin.get();
  return 0;
}
