/*Finding total no. of units and calculating total cost*/
#include <stdio.h>
int main(void)

{
	float a;
	scanf("%f",&a);
    
    int p,s;
    p=(int)a-1;
    s=(int)a+1;

    printf("Predecessor:%d Successor:%d\n",p,s);
    return 0;
}