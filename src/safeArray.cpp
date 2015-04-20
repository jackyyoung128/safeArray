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

void safeArray::Set ( int n, int v )
{
    if ( oK (n) )
        data [n] = v;
    else
        False ();
}
