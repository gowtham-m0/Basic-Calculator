#include <stdio.h>
#include <math.h>
#include <conio.h>

// Global Variable Declarations
int num, n = 5, i;
int ch;
clrscr();
int main()
{

    // Startup Banner
    printf("\n/*************************Basic Calculator To Solve Basic Problems*************************\\");
    printf("\n \n\nYou Can Perform Basic Calculations Like,\n\t Addition,Subraction,Multiplication,Divison,Modulus,SquareRoot/CubeRoot,Square/Cube of a Number And Other Operations");

    // Options To Perform Operation
    printf("\n\n Select The Operation You Want To Perform!!");
    printf("\n\n{1} To Perform Addition Operation Enter '1'");
    printf("\n{2} To Perform Subraction Operation Enter '2'");
    printf("\n{3} To Perform Multiplication Operation Enter '3'");
    printf("\n{4} To Perform Divison Operation Enter '4'");
    printf("\n{5} To Perform Modulus Operation Enter '5'");
    printf("\n{6} To Get Root of a Number Enter '6'");
    printf("\n{7} To Get Square of a Number Enter'7'");
    printf("\n{8} To Get Cube of a Number Enter '8'");

    // To Enter User Choice
    printf("\n\nEnter Your Choice: ");
    scanf("%d", &ch);

    // Fucntion Calling To Perform Operation

    // Callling Additon Function
    if (ch == 1)
    {
        sum();
    }

    // Calling Subraction Function
    else if (ch == 2)
    {

        sub();
    }

    // Calling Multiplication Function
    else if (ch == 3)
    {
        mul();
    }

    // Calling Division Function
    else if (ch == 4)
    {
        div();
    }

    // Calling Modulus Function
    else if (ch == 5)
    {
        mod();
    }

    // Calling Root Function
    else if (ch == 6)
    {
        root();
    }

    // Calling Square Function
    else if (ch == 7)
    {
        sqr();
    }

    // Calling Cube Function
    else if (ch == 8)
    {
        cube();
    }

    // Returning Invalid Statement
    else
    {
        printf("\nYou Have Selected An Invalid Option\n\n");
    }

    issue();

getch();
}

// Sum Function

int sum()
{
    int results = 0;

    printf("This Function Works For Both Positive And Negative Numbers!!");
    printf("\nMaximum Numbers Of Terms To Perform Addition is '5'!");
    printf("\nEnter The Number Of Terms To Perform Addition: ");
    scanf("%d", &n);
    if (n <= 5)
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter The Numbers: ");
            scanf("%d", &num);

            results = results + num;
        }
        printf("The sum of the numbers is %d", results);
    }
    else
        printf("Terms Out Of Range!");
}

// Subraction Function

int sub()

{
    int results = 0;
    printf("This Function Works For Both Positive And Negative Numbers!!");
    printf("\nSubraction Operation Works On The Order Of Ihe Input Given!");
    printf("\nMaximum Numbers Of Terms To Perform Subraction is '5'");
    printf("\nEnter The Number Of Terms To Perform Subraction: ");
    scanf("%d", &n);
    if (n <= 5)
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter The Numbers: ");
            scanf("%d", &num);
            if (results > num)
                results = results - num;
            if (num > results)
                results = num - results;
        }
        printf("The Differnce Of The Number is %d", results);
    }
    else
        printf("Terms Out Of Range!");
}

// Multiplication Function

int mul()
{
    int results = 1;
    printf("Maximum Numbers Of Terms To Multiply is '5'");
    printf("\nEnter The Number Of Terms To Perform Multiplication: ");
    scanf("%d", &n);
    if (n <= 5)
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter The Numbers: ");
            scanf("%d", &num);

            results = results * num;
        }
        printf("The Product of the numbers is %d", results);
    }
    else
        printf("Terms Out Of Range!");
}

// Division Function

int div()
{
    float results;
    int num1, num2;
    printf("Maximum Numbers Of Terms To Divide is '2'");
    printf("\nEnter The First Number : ");
    scanf("%d", &num1);
    printf("Enter The Second Number : ");
    scanf("%d", &num2);
    results = num1 / num2;
    printf("The Quotient Of The Numbers is %f ", results);
}

// Modulus Function

int mod()
{
    int results;
    int num1, num2;
    printf("Maximum Numbers Of Terms To Get Remainder is '2'");
    printf("\nEnter The First Number : ");
    scanf("%d", &num1);
    printf("Enter The Second Number : ");
    scanf("%d", &num2);
    results = num1 % num2;
    printf("The Remainder Of The Numbers is %d ", results);
}

// Root Function

int root()
{
    float results;
    printf("Enter a Number :  ");
    scanf("%d", &num);
    results = sqrt(num);
    printf("The Root Of %d is %f", num, results);
}

// Square Function

int sqr()
{
    int results;
    printf("This Function Doesn't Work For Decimal Values\n");
    printf("Enter a Number :  ");
    scanf("%d", &num);
    results = pow(num, 2);
    printf("The Square Of %d is %d", num, results);
}

// Cube Function

int cube()
{
    int results;
    printf("This Function Doesn't Work For Decimal Values\n");
    printf("Enter a Number :  ");
    scanf("%d", &num);
    results = pow(num, 3);
    printf("The Cube Of %d is %d", num, results);
}

int issue()
{
    printf("\n\nIf Found Any Issues In The Above Operations Pull A Request Regarding It,\nThankyou");
}