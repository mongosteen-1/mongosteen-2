//Multiples of 3 and 5
//if we list all the natual numbers below 10 that are multiples of 3 or 5,we get 3,5,6 and 9.the sum of these multiples is 23.
//find the sum of all the multiples of 3 or 5 below 1000.
#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i=1;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
