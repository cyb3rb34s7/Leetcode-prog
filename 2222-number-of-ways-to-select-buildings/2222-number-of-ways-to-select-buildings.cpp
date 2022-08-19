class Solution
{
    public:
        int n;
    long long dp[100005][3][4];
    long long go(int idx, int prevChar, int cnt, string &s)
    {
        if (cnt == 3)
            return 1;
        if (idx >= n)
            return 0;

        if (dp[idx][prevChar][cnt] != -1)
            return dp[idx][prevChar][cnt];
        long long ans = 0;
        if (cnt <= 2 and s[idx] - '0' != prevChar)
            ans += go(idx + 1, s[idx] - '0', cnt + 1, s);
        ans += go(idx + 1, prevChar, cnt, s);

        return dp[idx][prevChar][cnt] = ans;
    }
    long long numberOfWays(string s)
    {
        n = s.size();
        memset(dp, -1, sizeof(dp));
        return go(0, 2, 0, s);
    }
};