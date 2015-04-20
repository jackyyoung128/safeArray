#ifndef SAFEARRAY_H
#define SAFEARRAY_H


class safeArray
{
    public:
        safeArray ( int n );
        ~safeArray();

        void False ();
        bool oK ( int n );
        void Set ( int n, int v );
    protected:
    private:
        int* data;
        int N;
};

#endif // SAFEARRAY_H
