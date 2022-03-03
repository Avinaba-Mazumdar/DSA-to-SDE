class Solution{
     public:bool ispar(string x){
         stack<char> st;
         bool flag = true;
         
         for(char &ch : x){
             if(ch=='[' or ch=='{' or ch=='(')
                 st.push(ch);
             
             else if(st.empty() and (ch==']' or ch=='}' or ch==')')){
                 flag = false;
                 break;
             }
             
             else if(ch==']' and st.top()=='[') st.pop();
             else if(ch=='}' and st.top()=='{') st.pop();
             else if(ch==')' and st.top()=='(') st.pop();
             
             else{
                 flag = false;
                 break;
             }
         }
         
         if(!st.empty()) return false;
         return flag;
     }
 };