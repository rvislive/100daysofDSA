647 | Medium | Palindrome Substrings | Recursion/ DP

Given a string s, return the number of palindromic substrings in it.
A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

Constraints:
1 <= s.length <= 1000
s consists of lowercase English letters.


int usingDp(vector<vector<int>> &dp, string s, int i, int j) {
    if(i>=j) return 1;
    if(dp[i][j] >= 0) return dp[i][j];
    
    if(s[i] == s[j]) {
        dp[i][j] = usingDp(dp, s, i+1, j-1);
    } else {
        dp[i][j] = 0;
    }
    return dp[i][j];
}
    
int countSubstrings(string s) {
    int N = s.size(), count = 0;
    vector<vector<int>> dp(N, vector<int> (N, -1));
    for(int i=0; i<N; i++) {
        for(int j=i; j<N; j++) {
            count += usingDP(dp, s, i, j);
        }
    }
    return count;
}


int isPlaindrome(string s, int i, int j) {
    if(i>=j) return 1;
    
    if(s[i] == s[j]) {
        return isPlaindrome(s, i+1, j-1);
    } else {
        return 0;
    }
}


