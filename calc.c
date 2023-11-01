 #include <stdio.h>
#include <math.h>
#include <stdlib.h> 

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    if (n <= 3) {
        return 1; 
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; 
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; 
        }
    }
    return 1; 
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int choice;
    double result = 0.0;
    double num1, num2;

    while (1) {
        printf("Scientific Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square Root\n");
        printf("6. Sine\n");
        printf("7. Cosine\n");
        printf("8. Tangent\n");
        printf("9. Exponentiation\n");
        printf("10. Logarithm (base 10)\n");
        printf("11. Natural Logarithm\n");
        printf("12. Absolute Value\n");
        printf("13. Ceiling\n");
        printf("14. Floor\n");
        printf("15. Round\n");
        printf("16. Maximum\n");
        printf("17. Minimum\n");
        printf("18. Random Number\n");
        printf("19. Hypotenuse\n");
        printf("20. Area of a Circle\n");
        printf("21. Fibonacci\n");
        printf("22. GCD\n");
        printf("23. LCM\n");
        printf("24. Sum of Digits\n");
        printf("25. Prime Check\n");
        printf("26. Factorial\n");
        printf("27. Square\n");
        printf("28. Cube\n");
        printf("29. Square Root of a Number\n");
        printf("30. Cube Root of a Number\n");
        printf("31. Exponential Function (e^x)\n");
        printf("32. Sine Hyperbolic Function\n");
        printf("33. Cosine Hyperbolic Function\n");
        printf("34. Tangent Hyperbolic Function\n");
        printf("35. Inverse Sine (Arcsine)\n");
        printf("36. Inverse Cosine (Arccosine)\n");
        printf("37. Inverse Tangent (Arctangent)\n");
        printf("38. Inverse Tangent 2 (Arctangent with two arguments)\n");
        printf("39. Power of 10\n");
        printf("40. Factorial\n");
        printf("41. Absolute Value of a Complex Number\n");
        printf("42. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 42) {
            printf("Calculator is shutting down.\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
        } else {
            printf("Enter the number: ");
            scanf("%lf", &num1);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error: Division by zero.\n");
                }
                break;
            case 5:
                result = sqrt(num1);
                break;
            case 6:
                result = sin(num1);
                break;
            case 7:
                result = cos(num1);
                break;
            case 8:
                result = tan(num1);
                break;
            case 9:
                result = pow(num1, num2);
                break;
            case 10:
                result = log10(num1);
                break;
            case 11:
                result = log(num1);
                break;
            case 12:
                result = fabs(num1);
                break;
            case 13:
                result = ceil(num1);
                break;
            case 14:
                result = floor(num1);
                break;
            case 15:
                result = round(num1);
                break;
            case 16:
                result = fmax(num1, num2);
                break;
            case 17:
                result = fmin(num1, num2);
                break;
            case 18:
                result = (double)rand() / RAND_MAX;
                break;
            case 19:
                result = hypot(num1, num2);
                break;
            case 20:
                result = M_PI * pow(num1, 2);
                break;
            case 21:
                result = (double)fibonacci((int)num1);
                break;
            case 22:
                result = (double)gcd((int)num1, (int)num2);
                break;
            case 23:
                result = (double)lcm((int)num1, (int)num2);
                break;
            case 24:
                result = (double)sumOfDigits((int)num1);
                break;
            case 25:
                result = (double)isPrime((int)num1);
                break;
            case 26:
                result = (double)factorial((int)num1);
                break;
            case 27:
                result = pow(num1, 2);
                break;
            case 28:
                result = pow(num1, 3);
                break;
            case 29:
                result = sqrt(num1);
                break;
            case 30:
                result = cbrt(num1);
                break;
            case 31:
                result = exp(num1);
                break;
            case 32:
                result = sinh(num1);
                break;
            case 33:
                result = cosh(num1);
                break;
            case 34:
                result = tanh(num1);
                break;
            case 35:
                result = asin(num1) * 180 / M_PI;
                break;
            case 36:
                result = acos(num1) * 180 / M_PI;
                break;
            case 37:
                result = atan(num1) * 180 / M_PI;
                break;
            case 38:
                result = atan2(num1, num2) * 180 / M_PI;
                break;
            case 39:
                result = pow(10, num1);
                break;
            case 40:
                result = (double)factorial((int)num1);
                break;
            case 41:
                result = hypot(num1, num2);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        printf("Result: %lf\n", result);
    }

    return 0;
}
