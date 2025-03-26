#include <stdio.h>
main()
{
    long int p;
    int n;
    double q;
    //printf("------------------------------------------------------\n");
    printf("2 to power  p=2^n         n        2 to power  q=2^-n\n");
    //printf("--------------------------------------------------------\n");
    p=1;
    for(n=0; n<=20;++n)
    {
        if(n==0)
        {
            p=1;
        }

        else{
            p=p*2;
        }
        q=1.0/(double)p;
        printf("%10ld  %20d %20.12lf \n",p,n,q);
}
 printf("--------------------------------------------------------\n");


}
