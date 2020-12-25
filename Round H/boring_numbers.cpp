#include <bits/stdc++.h>
using namespace std;

int checkEven(int n){
    return (!(n & 1));
}

bool boring (string s){
    long int len = s.length();

    if(len == 1 && checkEven(stoi(s)) )
        return false;
    else if(len == 1)
        return true;


    for(int i = 0 ;i<len ; i+=2){
        
        if(checkEven(stoi(s.substr(i,1))) == true )
        {
            
            return false;
        }
    }

    for(int i = 1 ;i<len; i+=2){
          
          if(!(checkEven(stoi(s.substr(i,1)))))
          {
              
              return false;
          }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin >> t;
    for (int tc = 1; tc <=t; tc++)
    {
        long long int l,r;
        cin>>l>>r;

        int ans = 0;

        for(int i=l;i<=r;i++)
        {
            if(boring(to_string(i)))
            {
               ans++;
            }
        }

        cout<<"Case #"<<tc<<": "<<ans<<"\n";
    }
}