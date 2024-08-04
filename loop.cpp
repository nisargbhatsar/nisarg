#include <stdio.h>
#include<conio.h>

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 5) 
   {
        for (int i = 0; i < 10; i++) 
        {
            printf("%d\n", number);
        }
    }
}