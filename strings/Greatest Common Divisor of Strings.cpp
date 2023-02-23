class Solution {
public:
    int greastestCommonDivisor(int x, int y){
        return y == 0 ? x : greastestCommonDivisor(y, x%y);
    }
    
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.size(), l2 = str2.size();
        int gcd = greastestCommonDivisor(l1, l2);
        string sgcd = str1.substr(0, gcd);
        // regex pattern = regex("(" + sgcd + ")+");
        regex pattern(("(" + sgcd + ")+"));
        return  regex_match(str1, pattern) && regex_match(str2, pattern) ? sgcd: "";
    }
    
};
