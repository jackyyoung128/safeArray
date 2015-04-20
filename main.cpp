#include <iostream>
#include <stdio.h>
#include "safeArray.h"

using namespace std;

int main()
{
    int n, m;
    scanf ( "%d", &n );
    safeArray arr ( n );
    scanf ( "%d", &m );

    for ( int i=1; i<=m; i++ )
    {
        int c, v;
        scanf ( "%d %d", &c, &v );
        arr.Set ( c, v );
    }
    return 0;
}
