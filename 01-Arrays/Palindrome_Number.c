/*
Problem: Palindrome Number
LeetCode: 9
Difficulty: Easy
Language: C
Approach: Number Reversal
*/
bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    int n = x;
    long long rev_num = 0;
    
    while (n != 0) {
        int digit = n % 10;
        rev_num = rev_num * 10 + digit;
        n = n / 10;
    }
    if (rev_num == x) {
        return true;
    } else {
        return false;
    }
}
