#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define F 16384
typedef int fixed_t;

//17.14 format

fixed_t int_to_fixed(int n);

int fixed_to_int(fixed_t x);

fixed_t fixed_add (fixed_t x, fixed_t y);

fixed_t fixed_int_add (fixed_t x, int n);

fixed_t fixed_sub (fixed_t x, fixed_t y);

fixed_t fixed_int_sub (fixed_t x, int n);

fixed_t fixed_mul (fixed_t x, fixed_t y);

fixed_t fixed_int_mul (fixed_t x, fixed_t y);

fixed_t fixed_div (fixed_t x, fixed_t y);

fixed_t fixed_int_div (fixed_t x, int n);

#endif