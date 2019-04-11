// Question

// 피보나치 배열은 0과 1로 시작하며, 다음 피보나치 수는 바로 앞의 두 피보나치
// 수의 합이 된다. 정수 N이 주어지면, N보다 작은 모든 짝수 피보나치 수의 합을
// 구하여라.

// Fibonacci sequence starts with 0 and 1 where each fibonacci number is a sum
// of two previous fibonacci numbers. Given an integer N, find the sum of all
// even fibonacci numbers.

#include <iostream>
#include <vector>
using namespace std;

int f(int n) {
    int a = 0, b = 0, c = 1;
    int sum = 0;

    while (c < n) {
        if (c % 2 == 0) sum += c;
        a = b;
        b = c;
        c = a + b;
    }

    return sum;
}

int ans(int n) {
    int sum = 0;
    int x = 1;
    int y = 2;

    while (x <= n) {
        if (x % 2 == 0) {
            sum += x;
        }
        int z = x + y;
        x = y;
        y = z;
    }
    return sum;
}
int main() {
    int ans = f(100);
    cout << ans << endl << flush;

    cin.get();
    cin.ignore();
    return 0;
}