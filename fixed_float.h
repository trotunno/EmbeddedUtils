/*
 * fixed_float.h
 *
 *  Created on: Jul 25, 2023
 *      Author: Dylan
 */

#ifndef UTIL_FIXED_FLOAT_H_
#define UTIL_FIXED_FLOAT_H_

/* ------------------------------------------------------------------ */

#include <stdint.h>
#include <float.h>

/* ------------------------------------------------------------------ */

#define DEC_PRECISION_1		(10)
#define DEC_PRECISION_2		(100)
#define DEC_PRECISION_3		(1000)
#define DEC_PRECISION_4		(10000)
#define DEC_PRECISION_5		(100000)
#define DEC_PRECISION_6		(1000000)
#define DEC_PRECISION_7		(10000000)
#define DEC_PRECISION_8		(100000000)

#define DEC_PRECISION		DEC_PRECISION_2

/* ------------------------------------------------------------------ */

typedef struct
{
    int32_t whole;
    uint32_t decimal;
} fixed_float_t;

/* ------------------------------------------------------------------ */

void float_to_fixed(float float_value, fixed_float_t *fixed_float);

/* ------------------------------------------------------------------ */

#endif /* UTIL_FIXED_FLOAT_H_ */
