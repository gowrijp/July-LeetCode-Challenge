/*
Implement pow(x, n), which calculates x raised to the power n (i.e. xn).
Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000

*/
class Solution {
public:
    double myPow(double x, int n) {
        double temp=1.0;
        long long m = n;
        if(n<0){
            m=-1*m;
        }
        while(m){
            if(m%2){
                temp=temp*x;
                m=m-1;
            }
            else{
                x=x*x;
                m=m/2;
            }
        }
        if(n<0){
            temp=(double)(1.0)/(double)(temp);
        }
        return temp;
    }
};
