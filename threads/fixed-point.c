#include "threads/fixed-point.h"
#include <stdint.h>

//
fixed_t int_to_fixed(int n){

  return n * F;

}

//
int fixed_to_int (fixed_t x){

    if (x >= 0){

        return (x + F / 2) / F;

    }else{

        return (x - F / 2) / F;

    }

}

//
fixed_t fixed_add (fixed_t x, fixed_t y){

    return x + y;

}

//
fixed_t fixed_int_add (fixed_t x, int n){

    return x + n * F;

}


//
fixed_t fixed_sub (fixed_t x, fixed_t y){

    return x - y;

}

//
fixed_t fixed_int_sub (fixed_t x, int n){

    return x - n * F;
}

//
fixed_t fixed_mul (fixed_t x, fixed_t y){

    return ((int64_t) x) * y / F;

}

//
fixed_t fixed_int_mul (fixed_t x, int n){
    
    return x * n;

}

//
fixed_t fixed_div (fixed_t x, fixed_t y){

    return ((int64_t) x) * F / y;

}

//
fixed_t fixed_int_div (fixed_t x, int n){

    return x / n;

}