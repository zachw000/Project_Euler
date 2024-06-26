/**
 *  @author Zachary Waldorn
 *  @file   ProjectEuler.h
 *  @copyright 2024 (c) Zachary Waldron
 *  @li GLP-v3.0
 *  THIS IS OPEN SOURCE SOFTWARE AND IS PROVIDED AS-IS
 *  THE MAINTAINER IS NOT RESPONSIBLE FOR THE USE OF
 *  THIS CODE.
**/

#ifndef PROJ_EULER_INIT
#define PROJ_EULER_INIT

// Standard (stdlib) includes
#include    <stdlib.h>
#include    <stdio.h>
#include    <bool.h>
#include    <string.h>
#include    <ncurses.h>
#include    <math.h>

// Special 2-dimensional vector representing complex number
typedef struct {
    double  real;
    double  imag;
} ComplexNumber;

// Vector of n length implemented via linked list
typedef struct {
    double  scalar;
    // Address to another vector object
    Vector  *next_component =   nullptr;
} Vector;

void process_commands(char **tkns);
Vector init_vec(int v_size);

#endif