#include <fstream>
#include "bmp.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    U8 bitCountPerPix;
    U32 width, height;
    U8 *pdata = GetBmpData24(&bitCountPerPix, &width, &height, "bird.bmp");
    ofstream fout ("res.txt");
    int x, y;
    U32 bmppitch = ((width*bitCountPerPix + 31) >> 5) << 2;
    U8 BytePerPix = bitCountPerPix >> 3;
    U32 pitch = width * BytePerPix;
    U32 originpitch = width * BytePerPix;
    fout << "memory_initialization_radix=32;" << endl;
    fout << "memory_initialization_vector=" << endl;
    for(y = 0; y < height; y++) {
        for(x = 0; x < width; x++) {
        	fout << "00000"; 
            int data = pdata[y*originpitch+x*BytePerPix+0] / 16;
            char tmp[4];
            sprintf(tmp, "%01X", data);
            fout << tmp;
            data = pdata[y*originpitch+x*BytePerPix+1] / 16;
            sprintf(tmp, "%01X", data);
            fout << tmp;
            data = pdata[y*originpitch+x*BytePerPix+2] / 16;
            sprintf(tmp, "%01X", data);
            fout << tmp;
            fout << ", ";
        }

    }   
    free(pdata); 
    return 0;
}
