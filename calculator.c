//This is header file
#include<stdio.h>
#include<conio.h>

//declaration of function
void calculator();

//I will have to run main function
int main()
{
    //This is clean clear data at the display

    calculator();
    return 0;

}

//defination of function
void calculator()
{
    //initialize of two variable num1 and num2 and choice varible
    int num1,num2,choice;


        /*we want to perform the operation which create the main menu...
        if we want to add two number then press the 1.
        if we want to subtraction two number then press the 2.
        if we want to multiple two number then press the 3.
        if we want to divide two number then press the 4.
        if we want to find the remainder then press the 5.*/

       printf("1.Add two number.");
       printf("\n2.Sub two number.");
       printf("\n3.Multi two number.");
       printf("\n4.Div two number.");
       printf("\n5.Remainder two number.");


       //we want to perform the operation which enter the number
       printf("\n\nEnter the choice : ");
       scanf("%d",&choice);

           //assign the value of num1 and num2
        printf("Enter the first number :");
        scanf("%d",&num1);

        printf("Enter the second number : ");
        scanf("%d",&num2);

       //use the switch operator
       switch(choice)
       {
            case 1:
                printf("%d + %d = %d",num1,num2,num1+num2);
                break;
            case 2:
                printf("%d - %d = %d",num1,num2,num1-num2);
                break;
            case 3:
                printf("%d * %d = %d",num1,num2,num1*num2);
                break;
            case 4:
                printf("%d / %d = %d",num1,num2,num1/num2);
                break;
            case 5:
                printf("\nRemainder = %d",num1%num2);
                break;
            default :
                printf("Enter valid button...");

       }
}
