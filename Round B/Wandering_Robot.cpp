/***
    Google Kickstart 2020
    Author : Mubashir Ahmad
    Wandering Robot
    Round B
**/

#include <bits/stdc++.h>
using namespace std;
 
double mg[10003][10003];
 
int main() {
 
    int t;
    cin >> t;
 
    for(int tc = 1; tc <= t; tc++) {
    int W,H,L,U,R,D;
    cin >> W >> H >> L >> U >> R >> D;
 
    for(int i = 1; i <= W; i++)
        for(int j = 1; j <= H; j++)
            mg[i][j] = 0;
 
    mg[1][1] = 1;
 
    for(int i = 1; i <= W; i++) {
 
        for(int j = 1; j <= H; j++) {
 
           
 
            if(i >= L && i <= R && j >= U && j <= D)
                continue;
 
            if(i == W) {
                mg[i][j+1] += mg[i][j];
                continue;
            }
 
            if(j == H) {
                mg[i+1][j] += mg[i][j];
                continue;
            }
 
            mg[i+1][j] += mg[i][j]/2.0;
            mg[i][j+1] += mg[i][j]/2.0;
 
        }
 
    }
 
    cout << "Case #" << tc << ": " << mg[W][H] <<endl;
    }
 
}