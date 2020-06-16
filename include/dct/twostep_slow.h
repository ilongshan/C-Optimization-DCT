#ifndef SENG440_TWOSTEP_SLOW_H
#define SENG440_TWOSTEP_SLOW_H

#include <stdint.h>

void square_matrix_multiply(double lhs[8][8], double rhs[8][8], double out[8][8]);
void dct_twostep_slow(int8_t data_in[8][8], int8_t data_out[8][8]);

#endif // SENG440_TWOSTEP_SLOW_H