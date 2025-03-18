class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int count=0;
        int m=n;
        while(m>0){
            int rem=m%10;
            m=m/10;
            if(rem!=0&&n%rem==0){
                count++;
            }
        }
        return count;
    }
};
