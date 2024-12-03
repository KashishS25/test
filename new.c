#include<stdio.h>

int main() {
    int n = 5;  

    
    for (int i = 1; i <= n; i++)
     {
       
        for (int j = 1; j <= n - i; j++) 
        {
            printf("-");
        }

        
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (i % 2 == 1) 
            {
                printf("1");
            } 
            else
            {
                printf("0");
            }
        }

        
        for (int j = 1; j <= n - i; j++)
        
        {
            printf("-");
        }

        printf("\n");
    }

    
    for (int i = n - 1; i >= 1; i--) 
    {
       
        for (int j = 1; j <= n - i; j++) 
        {
            printf("-");
        }

       
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (i % 2 == 1) 
            {
                printf("1");
            } 
            else 
            {
                printf("0");
            }
        }

        
        for (int j = 1; j <= n - i; j++) 
        {
            printf("-");
        }

        printf("\n");
    }

    return 0;
}



include <stdio.h>

int main() {
    int n = 5;  // This defines the size of the pattern (middle row has 9 elements)

    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("-");
        }

        // Print numbers for each row
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (i % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }

        // Print trailing spaces
        for (int j = 1; j <= n - i; j++) {
            printf("-");
        }

        printf("\n");
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("-");
        }

        // Print numbers for each row
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (i % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }

        // Print trailing spaces
        for (int j = 1; j <= n - i; j++) {
            printf("-");
        }

        printf("\n");
    }

    return 0;
}