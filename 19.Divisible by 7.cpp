#include <stdio.h>

int isDivisibleBy7( int num )
{
    // If number is negative, make it positive
    if( num < 0 )
        return isDivisibleBy7( -num );
 
    if( num == 0 || num == 7 )
        return 1;
    if( num < 10 )
        return 0;
 
    // Recur for ( num / 10 - 2 * num % 10 ) 
    return isDivisibleBy7( num / 10 - 2 * ( num - num / 10 * 10 ) );
}

int main()
{
    int num = 616;
    if( isDivisibleBy7(num ) )
        printf( "Divisible" );
    else
        printf( "Not Divisible" );
    return 0;
}



Output:
Divisible
