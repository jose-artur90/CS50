#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int n;
    do
    {

    printf("what the height of the pyramid?\n");
    scanf("%d",n);
    getchar();

} 
while (n<1 || n>8);

for (int row = 0; row < n; row++)
{
    for (int space = 0; space < n - row - 1; space++)
    {
        printf(" ");
    }
    
    for (int collum = 0; collum <= row; collum++)
    {
        printf("#");
    }    
    printf("\n");  
}

}