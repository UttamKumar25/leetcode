class Solution {
public:
    bool isPalindrome(string s) {
        std::string normalized=""; //empty string

    for(char c:s){   //all char loop
        if(isalnum(c)){   //check alpha-numeric   // check alpha by     isalpha
            if(isupper(c)){ //check uppercase
                normalized+=tolower(c);  //if upper, append by converting into lower
            }
            else{
                normalized+=c;  //if lower, append directly
            }
        }
    }
    // Step 2: Check if the normalized string is a palindrome
    int start=0;
    int end=normalized.length()-1;

    while(start<end){
        if(normalized[start]!=normalized[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
    }
};