class Solution {
public:
    int reverse(int temp){
        int rev=0;
        while(temp>0){
            int dig=temp%10;
            rev=(rev*10)+dig;
            temp=temp/10;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        return abs((n-reverse(n)));
    }
};