#ifndef SENG440_TWOSTEP_SLOW_H
#define SENG440_TWOSTEP_SLOW_H

#include <stdint.h>
#include "util/constants.h"

void square_matrix_multiply(double lhs[8][8], double rhs[8][8], double out[8][8]);
void dct_twostep_slow(DataType data_in[8][8], int16_t data_out[8][8]);

#endif // SENG440_TWOSTEP_SLOW_H
