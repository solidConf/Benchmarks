/*

Commit Number: 8852f5f8ff3d521897175ddeb711d6b77e03fa8a
URL: https://github.com/GNUnet-Mirror/GNUnet/commit/8852f5f8ff3d521897175ddeb711d6b77e03fa8a
Project Name: GNUnet
License: AGPL-3.0
termination: FALSE
*/
#include<stdlib.h>
int main()
{
    unsigned int ui = 1;
    unsigned int size = __VERIFIER_nondet_uint();
    unsigned int BUFFSIZE = __VERIFIER_nondet_uint();
    if( size < BUFFSIZE )
        size = BUFFSIZE;
    while( ui < size ){
    //printf("%u\n", ui);
    if (size == 4294967295) abort();
        ui *= 2;}
    return 0;
}
