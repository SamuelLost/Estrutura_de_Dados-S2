#include "reta.h"
float calcula_tamanho(Reta r) {
    float d=0;
    d = sqrt(pow((r.b.x - r.a.x),2) + pow((r.b.y - r.a.y),2));
    return d;
}