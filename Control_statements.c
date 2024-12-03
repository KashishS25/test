#include<stdio.h>
int main()
{
    int age;
    printf("Enter the value of age: = ");
    scanf("%d",&age);

    if (age>=18)
    {
       printf("The age = %d is valid for vote",age); /* code */
    }
    else
    {
        printf("The age = %d is not valid for vote", age);
    }
    
    
    return 0;
}



#include <stdio.h>
 int main() 
{ 
 int x = 1; 
 switch (x) 
{ 
      case 1: 
      case 2: 
      case 5: printf("Matched\n"); 
      break; 
      default: printf("Not matched\n");
 } 
 return 0;
 }


#include <stdio.h>
void increment(int *p) 
{
    *p = *p + 1;
}
int main() 
{
    int x = 10;
    increment(&x);
    printf("%d", x);
    return 0;
}



#include <stdio.h> 
void func();
int main() 
{ 
      func(); 
      return 0;
 }
void func() 
{ 
    printf("Hello, World!"); 
}



#include <stdio.h>
int main()
 {
    int a = 5;
    int b = 10;
    int *p = &a;
    int *q = &b;
    *p = *q;
    printf("%d %d", a, b);
    return 0;
}


#include <stdio.h>
int main() 
{
    int a = 5, b = 3;
    printf("%d", a > b ? a : b);
    return 0;
}









