#include <bits/stdc++.h>
using namespace std;
#define setPixel bug

#ifndef ONLINE_JUDGE
#include "/home/blqck6ird/lib/blqckdebug.h"
#endif

// move horizontally
void mh(int &x, int &y, int &Δ){
    x = x + 1;
    Δ = Δ + 2*x + 1;
}

// move diagonally
void md(int &x, int &y, int &Δ){
    x = x + 1;
    y = y - 1;
    Δ = Δ + 2*x -2*y + 2;
}

// move vertically
void mv(int &x, int &y, int &Δ){
    y = y - 1;
    Δ = Δ - 2*y + 1;
}

void bresenhamCircleGeneration(int R){
    int x = 0;
    int y = R;

    int Δ = 2*(1-R);
    int limit = 0;

    while(y >= limit){
        setPixel(x,y);
        
        if(Δ < 0){
            int δ = 2*Δ + 2*y - 1;
            if(δ <= 0){
                // move horizontally
                mh(x,y,Δ);
            }
            else{
                // move diagonally
                md(x,y,Δ);
            }
        }
        else if(Δ > 0){
            int δ_ = 2*Δ - 2*x - 1;
            if(δ_ <= 0){
                // move diagonally
                md(x,y,Δ);
            }
            else{
                // move vertically
                mv(x,y,Δ);
            }
        }
        else{
            // move diagonally
            md(x,y,Δ);
        }
    }
}

int main()
{
    bresenhamCircleGeneration(8);
    return 0;
}