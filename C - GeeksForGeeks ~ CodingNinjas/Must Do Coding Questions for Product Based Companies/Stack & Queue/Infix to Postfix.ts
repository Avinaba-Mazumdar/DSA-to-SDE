class Solution{
          public:string infixToPostfix(string s){
          string ans = "";
          int n = s.size();
          stack<char> st;
          
          for(int i=0; i<n; i++){
               if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z'))
                    ans += s[i];
                    
               else if(s[i]=='(') st.push(s[i]);
               
               else if(s[i]==')'){
                    while(st.top()!='('){
                         ans += st.top();
                         st.pop();
                    }
                    st.pop();
               }
               
               else{
                    while(!st.empty() and rank(st.top())>=rank(s[i]) and s[i]!='^'){
                         ans += st.top();
                         st.pop();
                    }
                    st.push(s[i]);
               }
          }
          
          while(!st.empty()){
               ans += st.top();
               st.pop();
          }
          
          return ans;
          }
          
          private:int rank(char a){
          if(a=='+' or a=='-') return 1;
          else if(a=='*' or a=='/') return 2;
          else if(a=='^') return 3;
          else return -1;
          }
 };