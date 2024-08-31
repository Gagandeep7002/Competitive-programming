/*Subtract the Product and Sum of Digits of an Integer*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,p=1,d=0;
        while (n>0) {
            d=n%10;
            sum+=d;
            p*=d;
            n=n/10;
        }
        return p-sum;
    }
};