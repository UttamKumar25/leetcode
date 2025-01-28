class Solution {
public:
    double myPow(double x, int n) {
        return (pow(x,n) * 10000) / 10000.0; 
    }
};