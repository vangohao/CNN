#include <stdio.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#pragma aligned()

typedef float d_type;
typedef const unsigned int s_type;
const int NParameter = 6;

void cnn(unsigned long long *In, int * dest);
#ifndef __SYNTHESIS__
#define DEBUG
#endif