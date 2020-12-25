/***
    Google Kickstart 2020
    Author : Mubashir Ahmad
    Kickstart
    Round G
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main(){
    int t; cin >> t;
    for(int tc=1;tc<=t;tc++){
        string s; cin >> s;
        int c1= 0,c2= 0;

        for(int i=0;i<s.length();i++){
            
                if(s[i] == 'K' && s[i+1] == 'I' && s[i+2] == 'C' && s[i+3] == 'K'){
                        c1+=1;
                        continue;
                }

                if(s[i] == 'S' && s[i+1] =='T' && s[i+2] == 'A' && s[i+3] == 'R' && s[i+4] == 'T'){
                        c2+=c1;
                }
                    
            }
            
        cout <<"Case #"<<tc<<": "<<c2<<"\n";
    }
}