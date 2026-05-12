class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(auto i:tokens){
            if(i!="+" && i!="-" && i!="*" && i!="/") st.push(i);
            else{
                int b = stoi(st.top());
                st.pop();
                int a = stoi(st.top());
                st.pop();
                if(i == "+") st.push(to_string(a+b));
                else if(i == "-") st.push(to_string(a-b));
                else if(i=="*") st.push(to_string(a*b));
                else if(i=="/") st.push(to_string(a/b));
            }
        }
        return stoi(st.top());
    }
};
