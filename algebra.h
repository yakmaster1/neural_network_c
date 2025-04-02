#ifndef ALGEBRA_H
#define ALGEBRA_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define E 2.718281f

typedef struct Vector Vector;
typedef struct Stcvec Stcvec;
typedef struct Matrix Matrix;

struct Vector 
{
    int size;
    float* elements;
};

struct Stcvec
{
    int size;
    float* elements;
};

struct Matrix
{
    int rows;
    int columns;
    Vector** vectors;
};

Vector* create_v(float* elements, int size);
Matrix* create_m(int rows, int columns);
Vector* createzero_v(int size);
void dispose_v(Vector* vector);
void dispose_m(Matrix* matrix);

#endif