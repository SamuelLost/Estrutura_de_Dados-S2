#include "reta.h"
#include <math.h>
#include <stdlib.h>

float calcula_tamanho(Reta r){
    float d = sqrt(pow(r.p1.x - r.p2.x, 2) + pow(r.p1.y - r.p2.y, 2));
    
    return(d);
}
