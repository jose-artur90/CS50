/**
 * @file main.c
 * José Matos (jose.artur.matos90@gmail.com)
 * @brief 
 * version 0.1
 * 2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int start, end;
    do{
        printf("Initial population: \n");
        scanf("%d",start);        
    }
    while(start<9);

    getchar();

    do
    {
        printf("End population: \n");
        scanf("%d",end);
    } 
    while (start>end);

    int years = 0;
    do
    {
        start = start + (start/3) - (start/4);
        years++;
    } while (start<end);
    
    
    printf("the number is %d\n",years);
    
}

