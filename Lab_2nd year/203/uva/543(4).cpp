#include <stdio.h>
#include <math.h>

int main ()
{
    bool prime [1000005];
    int length = (int) sqrt (1000005);

    for ( int i = 0; i < 1000005; i++ )
        prime [i] = true;

    for ( int i = 2; i <= length; i++ ) 
	{
        for ( int j = i * 2; j < 1000005; j += i )
            prime [j] = false;
    }

    int n;

    while ( scanf ("%d", &n) && n ) {

        bool flag = true;

        int i = 3;

        while ( i <= n - i && flag ) {
            if ( prime [n - i] && prime [i]) {
                printf ("%d = %d + %d\n", n, i, n - i);
                flag = false;
            }

            i += 2;
        }
    }

    return 0;
}
