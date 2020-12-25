/***
    Google Kickstart 2020
    Author : Mubashir Ahmad
    Bike Tour
    Round B
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc,item;
    cin >> tc;
    for( int t=1;t<=tc;t++){
        vector<int> vc;
        int count=0,size;
        cin >> size;
        for(int i=0;i<size;i++){
            cin >> item;
            vc.push_back(item);
        }
        for(int i=0;i<size;i++){
            if(i!=0&&i!=vc.size()-1){
                if(vc[i-1]<vc[i]&&vc[i+1]<vc[i]){
                    count++;
                }
            }
        }
            cout << "Case #"<<t<<": "<<count<<endl;
        }
        
     }