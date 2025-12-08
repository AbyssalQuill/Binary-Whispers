#include<stdio.h>

int main( )
{
    int a[5] , max , min , i , j = 0 , k = 0 ;
    for( i = 0 ; i < 5 ; i++ )
        scanf( "%d" , &a[i] ) ;
    
    min = a[0] ;
    for( i = 1 ; i < 5 ; i++ )
        if( a[i] < min )
        {
            min = a[i] ;
            k = i;
        }
    
    max = a[0] ;
    for( i = 1 ; i < 5 ; i++ )
        if( a[i] > max )
        {
            max = a[i] ;
            j = i;
        }
    
    i = a[j];
    a[j] = a[k];
    a[k] = i;
    
    printf( "\nThe position of min is:%3d\n" , k ) ;
    printf( "\nThe position of max is:%3d\n" , j ) ;
    for( i = 0 ; i < 5 ; i++ )
        printf( "%5d" , a[i] ) ;
    
    return 0 ;
}