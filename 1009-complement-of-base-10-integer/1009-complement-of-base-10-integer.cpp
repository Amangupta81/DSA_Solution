class Solution {
public:
    int bitwiseComplement(int n) {
        int x=n;
        int net=0;
        if(n==0){
            return 1;
        }
        while(x!=0){
            net=net<<1|1;
            x=x>>1;
        }
        int ans=(~n)&net;
        return ans;
        
    }
};