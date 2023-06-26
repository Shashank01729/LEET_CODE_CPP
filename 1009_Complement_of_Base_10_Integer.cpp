class Solution {
public:
    int bitwiseComplement(int n){
        int c=0,m=1,i=0,bit,ans=0;
        if(n==0){
            return 1;
        }
        else{
            while(n!=0){
                bit=n&1;
                if(bit==0){
                    ans=ans+pow(2,i);
                }
                i++;
                n>>=1;
            }
            return ans;
        }
    }
};