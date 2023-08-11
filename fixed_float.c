/*
 * fixed_float.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Dylan
 */

/* ------------------------------------------------------------------ */

#include "fixed_float.h"

#include <stdint.h>
#include <float.h>
#include <math.h>

/* ------------------------------------------------------------------ */

void float_to_fixed(float float_value, fixed_float_t *fixed_float)
{

    fixed_float->whole = ( (uint32_t)float_value & 0x8000 ) ? ((int16_t)float_value)*-1 : (int16_t)float_value;
    fixed_float->decimal = ceil( ((fabs(float_value) - fabs((float)(fixed_float->whole))) * DEC_PRECISION) );

}
