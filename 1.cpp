#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> arr)
{
    int currentSum = arr[0];
    int maxSum = currentSum;
    for (int i = 1; i < arr.size(); i++)
    {
        currentSum = max(currentSum + arr[i], arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main()
{
    vector<int> arr({3, -5, 2, 2, 2});
    int answer = solution(arr);
    cout << "The Answer is " << answer << endl;
    return 0;
}