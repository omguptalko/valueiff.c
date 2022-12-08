// Program check the number even and odd
#include<stdio.h>
void main()
{
int a,b,c,d  ;
float ratio;
printf(" enter the four entiger value\n");
scanf("%d%d%d%d", &a,&b,&c,&d);
if(  c-d !=0)
{
ratio= (a+b) /(float)( c-d);
printf("Ratio +%f\n", ratio);
}
}