#include <bits/stdc++.h>
using namespace std;
#define setPixel bug

#ifndef ONLINE_JUDGE
#include "/home/blqck6ird/lib/blqckdebug.h"
#endif


void bresenhamLineGeneration(int x1,int y1,int x2,int y2){
    int x = x1;
    int y = y1;

    int dx = x2 - x1;
    int dy = y2 - y1;
    float m = (float) dy/dx;
    float e = m - 0.5;

    unsigned i = 0;

    while(i <= abs(dx)){
        setPixel(i, x, y);
        while(e > 0){
            y = y + 1;
            e = e - 1;
        }
        x = x + 1;
        e = e + m;
        i = i + 1;
    }
}

int main()
{
    bresenhamLineGeneration(3,7,8,10);
    return 0;
}