#include "gnome.h"
#include "utils.h"

void gnomeSort(void *base, size_t num, size_t size, int (*cmp)(const void *,const void *) ){
    byte *pbBase = (byte*)base;
    size_t i =0;
     
    while(i < num)
        if (i ==0 || cmp(pbBase +(i-1) *size, pbBase +i *size) >0)
            i++;
        else {
            swap(pbBase +i *size,pbBase +(i-1) *size, size );
            i--;
        }
}
