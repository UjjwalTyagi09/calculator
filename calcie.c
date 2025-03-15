#include <stdio.h>
#include <math.h>

// Function to convert degrees to radians
double toRadians(double degree) {
    return (degree * M_PI) / 180.0;
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n====== Calculator ======\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Sine (sin θ)\n");
        printf("7. Cosine (cos θ)\n");
        printf("8. Tangent (tan θ)\n");
        printf("9. Secant (sec θ)\n");
        printf("10. Cosecant (cosec θ)\n");
        printf("11. Cotangent (cot θ)\n");
        printf("12. Exit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3: // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4: // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0)
                    printf("Result: %.2lf\n", num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;
            case 5: // Modulus
                printf("Enter two integers: ");
                int a, b;
                scanf("%d %d", &a, &b);
                if (b != 0)
                    printf("Result: %d\n", a % b);
                else
                    printf("Error! Modulus by zero.\n");
                break;
            case 6: // sin θ
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = sin(toRadians(num1));
                printf("sin(%.2lf) = %.4lf\n", num1, result);
                break;
            case 7: // cos θ
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = cos(toRadians(num1));
                printf("cos(%.2lf) = %.4lf\n", num1, result);
                break;
            case 8: // tan θ
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                if (fmod(num1, 90) == 0 && fmod(num1, 180) != 0)
                    printf("tan(%.2lf) is undefined\n", num1);
                else {
                    result = tan(toRadians(num1));
                    printf("tan(%.2lf) = %.4lf\n", num1, result);
                }
                break;
            case 9: // sec θ
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                if (fmod(num1, 90) == 0 && fmod(num1, 180) != 0)
                    printf("sec(%.2lf) is undefined\n", num1);
                else {
                    result = 1 / cos(toRadians(num1));
                    printf("sec(%.2lf) = %.4lf\n", num1, result);
                }
                break;
            case 10: // cosec θ
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                if (fmod(num1, 180) == 0)
                    printf("cosec(%.2lf) is undefined\n", num1);
                else {
                    result = 1 / sin(toRadians(num1));
                    printf("cosec(%.2lf) = %.4lf\n", num1, result);
                }
                break;
            case 11: // cot θ
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                if (fmod(num1, 180) == 0)
                    printf("cot(%.2lf) is undefined\n", num1);
                else {
                    result = 1 / tan(toRadians(num1));
                    printf("cot(%.2lf) = %.4lf\n", num1, result);
                }
                break;
            case 12: // Exit
                printf("Exiting the calculator...\n");
                return 0;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }
}
