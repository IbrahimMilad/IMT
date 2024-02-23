#include <stdio.h>

int main() {
    int height, space, star;

    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        
        for (space = 1; space <= height - i; space++) 
		{
            printf(" ");
        }

        for (star = 1; star <= 2 * i - 1; star++) 
		{
            printf("*");
        }

        printf("\n");
    }

    return 0;
}