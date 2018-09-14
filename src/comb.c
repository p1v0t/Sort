#include "comb.h"

void combSort(void *base, size_t num, size_t size, int (*cmp)(const void *,const void *) ){
    byte *pbBase =(byte*)base;
    size_t i, gap;
    int swapped;
    const float shrink = 1.3f;

    gap =num;
    swapped =false;

    while(gap >1 ||swapped){

        if(gap >1)
            gap /= shrink;

        swapped = false;

        for(i =0; i + gap <num; i++){
            if(cmp(pbBase +i *size,pbBase +(i +gap) *size) <0){
                swap(pbBase +i *size,pbBase +(i +gap) *size, size);
                swapped = true;
            }
            if(cmp(pbBase +i *size,pbBase +(i +gap) *size) ==0)
                swapped =true;
        }
        
    }
}