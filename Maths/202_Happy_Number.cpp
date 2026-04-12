#include <unordered_set>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        int result = 0;
        int x;
            while (n != 1)
            {
                if(seen.count(n))
                    return false;
                seen.insert(n);                
                result = 0;
                while(n>0){
                    x = n%10;
                    n = n/10;
                    result += x*x;
                }
                n = result;
            }
            return true;
    }
};
