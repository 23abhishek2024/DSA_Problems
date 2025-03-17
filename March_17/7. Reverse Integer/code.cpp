class Solution {
public:
    int get_reverse(int n){
        long long ans_=0;
        while(n!=0){
        int rem=n%10;
        ans_=rem+ans_*10;
        n=n/10;
    }
    if (ans_ < INT32_MIN || ans_ > INT32_MAX) return 0;
    return (int)ans_;
    }
    int reverse(int x) {
            return (get_reverse(x));
    }
};
