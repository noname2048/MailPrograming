// Question

// 정수 n이 주어지면, n개의 여는 괄호 "("와 n개의 닫는 괄호 ")"로 만들 수 있는
// 괄호 조합을 모두 구하시오. (시간 복잡도 제한 없습니다).

// Given an integer N, find the number of possible balanced parentheses with N
// opening and closing brackets.

#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

void re(vector<string> &ans, string s, int open, int close, int n) {
    if (s.size() == n * 2) {
        ans.push_back(s);
        return;
    }

    if (open < n) {
        re(ans, s + "(", open + 1, close, n);
    }

    if (close < open) {
        re(ans, s + ")", open, close + 1, n);
    }
}

vector<string> f(int n) {
    vector<string> ans;
    re(ans, "", 0, 0, n);
    return ans;
}

int main() {
    vector<string> ans = f(4);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}
