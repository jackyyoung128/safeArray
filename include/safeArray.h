#ifndef SAFEARRAY_H
#define SAFEARRAY_H

#include <iostream>
using namespace std;

class safeArray
{
    public:
        safeArray ( int );
        ~safeArray();

        void False ();
        bool oK ( int );
        //void Set ( int, int );
        int& operator[] ( int c )
        {
            if ( oK (c) )
                return *(data + c);
            else
            {
                False ();
                return *(int* )NULL;
            }
        }

        friend ostream& operator<< ( ostream &os, safeArray &array)
        {
            for ( int i=0; i<array.N; i++ )
            {
                os << i << " : " << array[i] << endl;
            }
            return os;
        }

    protected:
    private:
        int* data;
        int N;
};

#endif // SAFEARRAY_H
