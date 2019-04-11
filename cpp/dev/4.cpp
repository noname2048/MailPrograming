// Question

// 정수(int)가 주어지면, 팰린드롬(palindrome)인지 알아내시오. 팰린드롬이란,
// 앞에서부터 읽으나 뒤에서부터 읽으나 같은 단어를 말합니다. 단, 정수를 문자열로
// 바꾸면 안됩니다.

// Given an integer, check if it is a palindrome.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool F(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

bool IsPalindrome(int input) {
    if (input < 0 || (input % 10 == 0 && input != 0)) return false;

    int revertedHalf = 0;
    while (input > revertedHalf) {
        revertedHalf = revertedHalf * 10 + input % 10;
        input /= 10;
    }

    return input == revertedHalf || input == revertedHalf / 10;
}
int main() {
    string ans;
    ans = (IsPalindrome(12421) == true ? "palindrom" : "not palindrom");
    cout << ans.size() << endl;

    cin.ignore();
    cin.get();
    return 0;
}