#include <bits/stdc++.h>
using namespace std;
#define setPixel bug

#ifndef ONLINE_JUDGE
#include "/home/blqck6ird/lib/blqckdebug.h"
#endif


void bresenhamLineGenerationInteger(int x1,int y1,int x2,int y2){
    int x = x1;
    int y = y1;

    int dx = x2 - x1;
    int dy = y2 - y1;
    int e_ = 2*dy - dx;

    unsigned i = 0;

    while(i <= abs(dx)){
        setPixel(i, x, y);
        while(e_ > 0){
            y = y + 1;
            e_ = e_ - 2*dx;
        }
        x = x + 1;
        e_ = e_ + 2*dy;
        i = i + 1;
    }
}

int main()
{
    bresenhamLineGenerationInteger(0,0,8,6);
    return 0;
}