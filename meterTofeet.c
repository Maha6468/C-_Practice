#include <stdio.h>
int main ()
{
    float m,f;
    printf("Enter a value of meter:\n");
    scanf("%f",&m);
    f =m*3.3;
    printf("The value of reslut  feet %.2f\n",f);

    printf("Enter a value of feet:\n");
    scanf("%f",&f);
    m=f*3.3;
    printf("The value of reslut meter %.2f \n",m);


}
