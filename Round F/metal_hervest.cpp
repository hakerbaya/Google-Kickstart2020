/***
    Google Kickstart 2020
    Author : Mubashir Ahmad
    Metal Harvest
    Round F
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int tc = 1; tc <=t; tc++){
        int count = 0, n, k, st, end;
        cin >> n >> k;
        vector<pair<int,int>> iv;
        for(int j = 0; j < n; j++){
            cin >> st >> end;
            iv.push_back(make_pair(st, end-st));
        }
        sort(iv.begin(), iv.end());
        int timee = 0;
        for(int a = 0; a < iv.size(); a++){
            int beg = iv[a].first, stop = iv[a].second;
            if(timee < beg + stop){
                int addition = ((beg + stop) - max(beg, timee) - 1)/k + 1;
                count += addition;
                timee = max(timee, beg) + k * addition;
            }
        }
        cout << "Case #"<<tc<<": "<<count << endl;
    }
} 