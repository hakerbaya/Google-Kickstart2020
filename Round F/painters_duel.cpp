/***
    Google Kickstart 2020
    Author : Mubashir Ahmad
    Painter's Duel
    Round F
**/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        long long int s, r1, p1, r2, p2, c, answer;
        bool blocked = false;
        cin >> s >> r1 >> p1 >> r2 >> p2 >> c;
        for(int a = 0; a < c; a++){
            long long int c1, c2;
            cin >> c1 >> c2;
            if(c1 == 2 and c2 == 2){
                blocked = true;
            }
        }
        if(r2 == 2 and p2 == 2){
            answer = max(c - 2, -1);
        }else if(blocked){
            answer = 0;
        }else{
            if(r1 == 2 and p1 == 2){
                answer = min(1, 2-c);
            }else{
                answer = 2-c;
            }
        }
        cout << "Case #"<<i+1<<": "<<answer<<endl;
    }
}