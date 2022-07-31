class Solution
{
    public:
        string fractionToDecimal(int a, int b)
        {
            if (a == 0) return "0";
            
            string ans = "";
            ans+= ((a>0)^(b>0)) ? "-" : "" ;

            long long n = abs(a);
            long long d = abs(b);

            long long  x = n / d;
            long long rem = n % d;

            ans += to_string(x);
            if (rem == 0) return ans;
            ans += ".";
            long long int ind = ans.size();
            unordered_map<int, int> mp;
            while (rem)
            {

                if (mp[rem])
                {
                    ans.insert(mp[rem], "(");
                    break;
                }
                else
                {
                    mp[rem] = ind;
                    rem *= 10;
                    long long int q = rem / d;
                    ans += to_string(q);
                    rem %= d;
                    ind++;
                    if (rem == 0)
                        return ans;
                }
            }
            ans += ")";
            return ans;
        }
};