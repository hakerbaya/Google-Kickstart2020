#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main(){
    int t; cin >> t;
    for(int tc=1;tc<=t;tc++){
        vector<int>sh;
        vector<int> left;
        vector<int> right;
        vector<int> mid;
        int tot,l,r,s; cin>> tot >> l >> r >> s;

        if ((l+r-s) > tot || (l + r - s == 1 && tot >= 2)){
            cout <<"Case #"<<tc<<": "<< "IMPOSSIBLE"<<"\n";
        }
        // if (l - s < 0 || r - s < 0 || l <= 0 || r <= 0 || l + r - s > tot || tot - l - r + s > max(0, tot - 2)){
        //     cout <<"Case #"<<tc<<": "<< "IMPOSSIBLE"<<"\n";
        // }
        else{
             // 4 1 3 1
            
             // 4 5 5 1 4 
            // Push Shared
            // 4

            // 1 2
            for(int i=0;i<s;i++){
                sh.pb(tot);
            }
            int tmp = tot;
            for(int i=0;i<l-s;i++){
                tmp = tmp-1;
                left.pb(tmp);
            }
             
            for(int i=0;i<r-s;i++){
                tmp = tmp-1;
                right.pb(tmp);
            }
            int rem = (tot-(sh.size()+left.size()+right.size()));
            for(int i=0;i<rem;i++){
                mid.pb(1);
            }
            
            if(l == r && r == s){
                cout << "Case #"<<tc<<": ";
                cout << tot << " ";
                for(int i=0;i<tot-s;i++){
                    cout << "1" << " ";
                }
                for(int i=0;i<s-1;i++){
                    cout << tot << " ";
                }
                cout << "\n";
            } else{
                cout << "Case #"<<tc<<": ";
            
            
                for(int i=left.size()-1;i>=0;i--){
                cout << left[i] << " ";
            }

                if(l > r || l==r){
                for(int i=0;i<mid.size();i++){
                cout << mid[i]<<" ";
            
            }
                }
        
            
            for(int i=0;i<sh.size();i++){
                
                cout << sh[i] <<" ";
                
            }
            
            if(r > l ){
                for(int i=0;i<mid.size();i++){
                cout << mid[i]<<" ";
            }  
            }
            
            for(int i=0;i<right.size();i++){
                cout << right[i] <<" ";
            }
            cout <<"\n";
            }

        }
    }
}