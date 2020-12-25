#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int t;
    cin >> t;
    for(int tc=1;tc<=t;tc++){
        int N, M;
        cin >> N >> M;
        vector<int> vc;
        map<int,vector<int>> mp;
        for (int i = 0; i < N; i++){
            int item; cin >> item;
            vc.push_back(item);
            vc[i] = (vc[i] + M - 1) / M;
        }
        for (int i = 0; i < N; i++){
            mp[vc[i]].push_back(i+1);
        }
        cout << "Case #"<<tc<<":";
        for (auto p : mp){
            for (int d : p.second){
                cout << " " << d;
            }
        }
        cout << endl;


    }
}