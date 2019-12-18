#include <stdio.h>
#include <math.h>
#include <string.h>
#include <memory.h>

typedef float d_type;
typedef const unsigned int s_type;
const int NParameter = 6;

void cnn(d_type *In, d_type *W, d_type * B, d_type * FC, int * dest);
// #define DEBUG