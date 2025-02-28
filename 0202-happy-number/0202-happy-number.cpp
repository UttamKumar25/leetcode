class Solution {
public:

int getNext(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int count = 10000;  // Limit iterations to prevent infinite loop

    while (n != 1 && count > 0) {
        n = getNext(n);
        count--;
    }

    return n == 1;  // If n == 1, it's happy; otherwise, cycle detected
}
/*
int getNext(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && seen.find(n) == seen.end()) {//tabtak loop chalega jab tak n=1 nhi aa jata,, ya SEEN(CYCLE detect) nhi ho jata

        //seen.find(n) == seen.end()-----SAYS phle se N nhi hai 
            seen.insert(n);   //enter N into SET as it ENCOUNTER--for FUTURE USE TO DETECT CYCCLE
            n = getNext(n);
        }
        return n == 1;
    }

    */
};