#include<cs50.h>
#include<stdio.h>

int meow(int a);

int main(void)
{
    int n;
    do{
         n = get_int("Size: ");
    }
    while(n < 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("#clear");
        }
        printf("\n");
    }
}

