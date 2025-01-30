class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;

        stringstream ss(s);
        string word, res;

        while(ss>>word){
            st.push(word);
        }

        while(!st.empty()){
            res+=st.top() +' ';
            st.pop();
        }

        res.pop_back();  // remove end space

        return res;
    }
};