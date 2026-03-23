class Solution {
public:
    bool isPalindrome(int x) {
        long sum=0;
        int num=x;
        if(x<0)
        {
            return false;
        }
        do{
            sum=sum*10 + x%10;
            x=x/10;
        }while(x>0);
        if(num==sum){
            return true;
        }
        else
        {
            return false;
        }
    }
};