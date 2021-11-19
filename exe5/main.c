/**
 * @file exer5W3Bsko.c
 * @author José Matos (a19334@alunos.ipca.pt)
 * @brief 
 * @version 0.1
 * @date 11-2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#pragma assinaturas 
int area(int height, int width);
int perimeter(int height, int width);
#pragma 

int area(int height, int width){
         
    return height * width;;
}
 
int perimeter(int height, int width){
          
     return height * 2 + width * 2;
}

void swap(int *x, int *y ){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;

    return;

}

void swapString(char *a, char *b){
    char tmp[strlen(a) + strlen(b)];

    strcpy(tmp,a);
    strcpy(a,b);
    strcpy(b,tmp);
} 
 
 
int main()
{
    char p[20]="artur";
    char q[20]="jeronimo";
    int ar= area(7,5);
    int pr = perimeter(7,5); 
    int a=1, b=2; 
   printf("the area of triangle is %d \n", ar);
   printf("the perimeter of triangle is %d \n", pr);
   swap(&a,&b);
   printf("valorea :%d %d",a,b);
   swapString(p,q);
   printf("valorea :%s %s",p,q); 

}
