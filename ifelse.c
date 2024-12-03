#include<stdio.h>
int main()
{
    printf("\n ---------------for Not Equal to Operator--------------\n");
    
    //not equals to operator: value should not be equal
     if(10!=10)
    {
        printf("\nTrue(1): They are not equal....!");
    }
    else
    {
        printf("\nFalse(0):They are Equal...!");
    }

    printf("\n --------for Equal to Operator---------\n");
    if(10 == 11)
    {
        printf("\nTrue(1): They are Equal....!");
    }
    else
    {
        printf("\nFalse(0):They are not Equal...!");
    }

    printf("\n -------- for age validation ---------\n");
    int age;
    printf("\nEnter the value of age:=");
    scanf("%d",&age);

    if(age>18)
    {
        printf("\nThe age=%d is valid for vote",age);
    }

    printf("\n ----------for even and odd--------\n");

    int num;
    printf("\nEnter the number to check whether it is even or odd:=");
    scanf("%d",&num);

    if(num %2==0)
    {
        printf("\nNumber= %d is Even NUmebr",num);
    }
    else
    {
        printf("\nNumber = %d is Odd NUmebr",num);
    }

    return 0;
}




#include<stdio.h>
int main()
{
    int age;
    printf("\nEnter the value of age:=");
    scanf("%d",&age);

    if(age>0 && age<18)
    {
        printf("\nThe age = %d is not valid for vote",age);
    }
    else if(age>=18 && age<= 70)
    {
        printf("\nThe age= %d is valid for vote",age);
    }
    else
    {
        printf("\nThe age=%d dosent Exist...!",age);
    }

    return 0;

}






#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the Number;=");
    scanf("%d", &num);

    if(num %3==0 &&num %5==0)
    {
        printf("\nMSG: C Language");
    }

    else if (num %5==0)

    {
        printf("\nMSG: Language");
    }

    else if(num %3==0)
    {
        printf("\nMSG: C");
    }

    return 0;
}




#include<stdio.h>
int main()
{
    int choice, side, length, width;
    float radius;
    printf("\n------Menu------\n");
    printf("\n1: Area of Circle");
    printf("\n2: Area of Square");
    printf("\n3: Area of Rectangle");
    printf("\nEnter Your Choice:=");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("\nEnter the Radius:=");
        scanf("%f",&radius);
        printf("\nThe Area of the circle is:=%f",3.14 * radius * radius);
    }


    else if(choice==2)
    {
        printf("\nEnter the side:=");
        scanf("%d",&side);
        printf("\nThe Area of the Square is:=%d",side * side);
    }

    else if(choice==3)
    {
        printf("\nEnter the Length and width:=");
        scanf("%d%d",&length,&width);
        printf("\nThe Area of the Rectangle is:=%d",length * width);
    }
    else
    {
        printf("\nInvalid choice....!");
    }
    printf("\n------Thank You Visit Again------\n");
    return 0;
}




#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("\n------Menu------\n");
    printf("\n1:Addition");
    printf("\n2:Substraction");
    
}