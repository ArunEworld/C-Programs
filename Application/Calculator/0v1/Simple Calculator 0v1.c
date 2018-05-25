//www.ArunEworld

// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>
char Get_Operator;

int main() {

    
    double First_Number,Second_Number;

    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &Get_Operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&First_Number, &Second_Number);

    switch(Get_Operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",First_Number, Second_Number, First_Number + Second_Number);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",First_Number, Second_Number, First_Number - Second_Number);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",First_Number, Second_Number, First_Number * Second_Number);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",First_Number, Second_Number, First_Number / Second_Number);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}