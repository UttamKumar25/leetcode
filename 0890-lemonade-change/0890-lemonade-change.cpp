class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        int n=bills.size();


        for(int i=0; i<n; i++){
            if(bills[i]==5)
            {
                five++;
            }else if(bills[i]==10){
                //check if 5 rs availabe or not
                if(five){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }else{
                //when 20 rs come

               // check either one 10 rs and 1 five rs,    or 3 five rs avaiable or not
               if(ten && five){
                five--;
                ten--;
               }else if(five>=3){
                five=five-3; //remove 3 coin of rs 5
               }
                // If unable to give
            // change, return false
                else return false;  
            }
        }
        return true;

    }
};