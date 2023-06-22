#include <stdio.h>

int biggest_ifelse(int s, int t)
{
    if(s>t)
    {
    return s;
    }
    else
    {
    return b;
    }
}
int biggest_ternery(int s, int t)
{
    return(s,t)?s:t;
}
int mmain()
{
    int s,t;
    printf("Give any two numbers:");
    scanf("%d,%d", &s,&t);
    int p=int biggest_ifelse(s,t);
    int q=int biggest_ternery(s,t);
    printf("The biggest of two numbers using ifelse is: %d\n",p);
    printf("The biggest of two numbers using ternery is: %d\n",q);
    return 0;


}
