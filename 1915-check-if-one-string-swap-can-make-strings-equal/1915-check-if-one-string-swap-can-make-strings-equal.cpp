class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
      
  
       
        for(int i=0; i<s2.size(); i++){
            string swap_s=s2;
                for(int j=0; j<s2.size(); j++){
                    swap(swap_s[i], swap_s[j]);
                    if(swap_s==s1){
                      return true;
                    }
                    swap(swap_s[i],swap_s[j]);
                }
            }

        return false;
       
        
    }
};