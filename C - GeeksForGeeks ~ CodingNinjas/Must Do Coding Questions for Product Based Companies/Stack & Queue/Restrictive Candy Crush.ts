#define ff first
#define ss second

class Solution{
     public:string Reduced_String(int k,string s){
          if(k==1) return "";
          stack<pair<char,int>>st;
          string res="";
          for(int i=0;i<s.size();i++){
               if(st.empty()) st.push({s[i],1});
               
               else if(st.top().ff==s[i]){
                    st.push({s[i],st.top().ss+1});
                    if(st.top().ss==k){
                         int temp=k;
                         while(temp--) st.pop();
                    }
               }
               else{
                    st.push({s[i],1});
               }
          }
          while(!st.empty()){
               res+=st.top().ff;
               st.pop();
          }
          reverse(res.begin(),res.end());
          return res;
     }
};