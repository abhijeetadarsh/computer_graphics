#include <bits/stdc++.h>
using namespace std;
#define setPixel bug


#ifndef ONLINE_JUDGE
#include "/home/blqck6ird/lib/blqckdebug.h"
#endif


void digitalDiffrenceAnalyser(int x1,int y1,int x2,int y2){
    float x = x1 + 0.5;
    float y = y1 + 0.5;

    int dx = x2 - x1;
    int dy = y2 - y1;

    unsigned length ,i = 0;
    if(abs(dx) > abs(dy)){
        length = abs(dx);
    }
    else{
        length = abs(dy);
    }

    float incx = (float)dx/length;
    float incy = (float)dy/length;

    while(i <= length){
        setPixel(i, floor(x),floor(y));
        x = x + incx;
        y = y + incy;
        i++;
    }
}

int main()
{
    digitalDiffrenceAnalyser(0,0,-8,-4);
    return 0;
}