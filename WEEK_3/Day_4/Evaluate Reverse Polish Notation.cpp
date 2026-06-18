class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size(); 
        stack<int> st ; 

        for(auto x : tokens){

            if(x=="+"){
                int b = st.top(); 
                st.pop(); 

                int a = st.top(); 
                st.pop();

                st.push(a+b);  
            }
            else if(x=="-"){
                int b = st.top(); 
                st.pop(); 

                int a = st.top(); 
                st.pop();

                st.push(a-b);  
            }
            else if(x=="*"){
                int b = st.top(); 
                st.pop(); 

                int a = st.top(); 
                st.pop();

                st.push(a*b);  
            }else if(x=="/"){
                int b = st.top(); 
                st.pop(); 

                int a = st.top(); 
                st.pop();

                st.push(a/b);  
            }
            else{
                
                st.push(stoi(x)); 
            }
            

        }

        return st.top(); 
    }
};