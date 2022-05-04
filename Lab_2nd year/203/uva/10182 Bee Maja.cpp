#include<stdio.h>
long r,k;

int ring(long n){
    r = 0,    k = 1;
    while(n > k)
    {
        r++;
        k += r*6;
    }
    return 0;
}

int cordinate(long x, long y, long n, long k){
    if(n==k){
            printf("%ld %ld\n",x,y);
            return 0;
    }

    while( (x + y) != 0 ){
        y--;
        k--;
        if(n==k){
            printf("%ld %ld\n",x,y);
            return 0;

        }
    }

    while( x != 0 ){
        x--;
        k--;
        if(n==k){
            printf("%ld %ld\n",x,y);
            return 0;

        }
    }

    while( x != (-1)*r ){
        x--;
        y++;
        k--;
        if(n==k){
            printf("%ld %ld\n",x,y);
            return 0;

        }
    }

    while( (x + y) != 0 ){
        y++;
        k--;
        if(n==k){
            printf("%ld %ld\n",x,y);
            return 0;

        }
    }
    while( x!=0 ){
        x++;
        k--;
        if(n==k){
            printf("%ld %ld\n",x,y);
            return 0;

        }
    }

    while( (x+1) != r ){
        x++;
        y--;
        k--;
        if(n==k){
            printf("%ld %ld\n",x,y);
            return 0;

        }
    }

}

int main(){
    long n;
    while(scanf("%ld",&n)!=EOF){
    ring(n);
    long x,y;
    x=r;
    y=0;

    cordinate(x,y,n,k);
    }
    return 0;
}
