/***
    Google Kickstart 2020
    Author : Mubashir Ahmad
    Record Breaker
    Round D
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t; cin >> t;
    for(int tc=1;tc<=t;tc++){
        int count = 0;
        vector<int> vc;
        int s;cin >> s;
        
        for(int i=0;i<s;i++){
            int e; cin >> e;
            vc.pb(e);
        }
         vc.push_back(-1);
         int maxx = -1;
         
         for(int i=0;i<s;i++){
            if(vc[i] > maxx && vc[i] > vc[i+1]){
                count++;
            }
            maxx = max(vc[i],maxx);

            
            
         }
         
         cout << "Case #"<<tc<<": "<<count<<"\n";
        
        
    }
    
}