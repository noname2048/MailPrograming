// Question

// 정수 배열과 타겟 숫자가 주어지면, 합이 타겟값이 되는 두 원소의 인덱스를 찾으시오.
// 단, 시간복잡도 O(n) 여야 합니다.

// Given an array of integers and a target integer, find two indexes of the array element that sums to the target number.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int[] ans(int[] input, int target) {
    Map<int, int> map = new HashMap<>();
    for(int i=0; i< input.length; i++) {
        int complement = target - input[i];
        if (map.containsKey(complement)) {
            return [map.get(complement), i];
        }
        map.put(input[i], i);
    }
    return [-1, -1];
}

int main() {
    return 0;
}