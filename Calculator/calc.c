#include <stdio.h>

int main()  
{  
    // declare local variables  
    char opt;  
    int n1, n2;   
    float res;  
    printf ("Choose an operator(+, -, *, /) to perform the operation in C Calculator \n");  
    scanf ("%c", &opt); // take an operator  
    
    // Notify user of selected operator
    if (opt == '/' )  
    {  
        printf ("You have selected: Division\n");  
    }  
    else if (opt == '*')  
    {  
        printf ("You have selected: Multiplication\n");  
    }  
    else if (opt == '-')  
    {  
        printf ("You have selected: Subtraction\n");  
    }  
    else if (opt == '+')  
    {  
        printf ("You have selected: Addition\n");  
    }  
    
    // Input numbers  
    printf ("Enter the first number: ");  
    scanf(" %d", &n1); // take first number  
    printf ("Enter the second number: ");  
    scanf (" %d", &n2); // take second number  
    
    // Perform calculation  
    switch(opt)  
    {  
        case '+':  
            res = n1 + n2;  
            printf ("Addition of %d and %d is: %.2f\n", n1, n2, res);  
            break;  
        case '-':  
            res = n1 - n2;  
            printf ("Subtraction of %d and %d is: %.2f\n", n1, n2, res);  
            break;  
        case '*':  
            res = n1 * n2;  
            printf ("Multiplication of %d and %d is: %.2f\n", n1, n2, res);  
            break;  
        case '/':  
            if (n2 == 0)   
            {  
                printf ("Divisor cannot be zero. Please enter another value\n");  
                scanf ("%d", &n2);        
            }  
            res = (float)n1 / n2;  
            printf ("Division of %d and %d is: %.2f\n", n1, n2, res);  
            break;  
        default:  
            printf ("Something is wrong!! Please check the options\n");               
    }  

    // Add this line to wait for user input before closing
    printf("\nPress Enter to exit the program...");
    getchar();  // To capture the newline character left by previous scanf
    getchar();  // Wait for the user to press enter

    return 0;  
}
