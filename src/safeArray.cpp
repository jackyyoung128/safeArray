#include <stdio.h>
#include "safeArray.h"

safeArray::safeArray ( int n )
{
    data = new int [n];
    N = n;
}

safeArray::~safeArray ()
{
    delete[] data;
}

bool safeArray::oK ( int n )
{
    return ( N>n && n>=0 ) ? true : false;
}

void safeArray::False ()
{
    printf ( "Your input is false!\n" );
}

