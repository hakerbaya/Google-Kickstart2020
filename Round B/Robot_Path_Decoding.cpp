#include<bits/stdc++.h> 
using namespace std; 
  
string decodeString(string s) {
      stack <char> st;
      int i = 0;
      while(i<s.size()){
         if(s[i] == ')'){
            string res = "";
            while(st.top()!='('){
               res = st.top() + res;
               st.pop();
            }
            st.pop();
            int n = 0;
            int x = 1;
            while(!st.empty() && st.top()>='0' && st.top()<='9'){
               n = n + (st.top()-'0')*x;
               x*=10;
               st.pop();
            }
            for(int j = 1; j <= n; j++){
               for(int x = 0; x < res.size();x++){
                  st.push(res[x]);
               }
            }
         }
         else{
            st.push(s[i]);
         }
         i++;
      }
      string ans ="";
      while(!st.empty()){
         ans = st.top() + ans;
         st.pop();
      }
      return ans;
   }



void retPos(string ss ,int &x, int &y){
        for(auto c: ss){
            if(c == 'N' && y == 1){
                y = 1e9;
            }else
            if(c == 'N' && y != 1){
                y = y-1;
            }else
            if(c == 'S' && y == 1e9){
                y = 1;
            }else
            if(c == 'S' && y != 1e9){
                y = y+1;
            }
            else
            if(c == 'W' && x == 1){
                x = 1e9;
            }else
            if(c == 'W' && x != 1){
                x = x-1;
            }else
            if(c == 'E' && x == 1e9){
                x = 1;
            }else
            if(c == 'E' && x != 1e9){
                x = x+1;
            }
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int tc=1;tc<=t;tc++){
        int x = 1,  y = 1;
        string ss; cin >> ss;
        ss = decodeString(ss);
        retPos(ss,x,y);
        cout << "Case #"<<tc<<": "<<x <<" "<<y<<"\n";
    } 
}