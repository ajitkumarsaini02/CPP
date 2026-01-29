#include <iostream>
#include <string>
using namespace std;

int maze(int sr, int sc, int er, int ec) {
    if (sr > er || sc > ec) return 0;
    if (sr == er || sc == ec) return 1;
    int rightWays = maze(sr, sc + 1, er, ec);
    int downWays = maze(sr + 1, sc, er, ec);
    return rightWays + downWays;
}
int maze2(int row, int col) {
    if (row<1 || col<1) return 0;
    if (row==1 && col==1) return 1;
    int rightWays = maze2(row,col-1);
    int downWays = maze2(row-1,col);
    return rightWays + downWays;
}

void printpath(int sr, int sc, int er, int ec, string s) {
    if (sr > er || sc > ec) return;              // out of bounds
    if (sr == er && sc == ec) {                  // reached destination
        cout << s << endl;
        return;
    }
    printpath(sr, sc + 1, er, ec, s + 'R');      // move right
    printpath(sr + 1, sc, er, ec, s + 'D');      // move down
}

void printpath2(int row, int col, string s) {
    if (row<1 || col<1) return;
    if (row==1 && col==1){
        cout << s << endl;
        return;
    }
    printpath2(row,col-1, s + 'R');      // move right
    printpath2(row-1,col, s + 'D');      // move down
}

int main() {
    printpath2(3,3,"");
    return 0;
}
