#include "lib.h"

float max (float num[], int d){
    float n=0;
    for (int i=0 ; i<d; i++){
        if (n < num[i]){
            n=num[i];
        }
    }
    return n;
}
