class Solution {
public:
    bool checkDivisibility(int n) {
        int org = n;
        int dig;
        int sum = 0, prod = 1;
        while(n > 0) {
            dig = n % 10;
            sum += dig;
            prod *= dig;
            n = n/10;
        }
        if(org % (sum + prod) == 0){
            return 1;
        }else{
            return 0;
        }
    }
};