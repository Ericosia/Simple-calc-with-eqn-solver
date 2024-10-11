#include <stdio.h>
#include <math.h>
 
double num1, num2, result;

int Addition() {
    result = num1 + num2;

    return result;

}

int Subtraction() {
    result = num1 - num2;

    return result;

}

int Multiplication() {
    result = num1 * num2;

    return result;

}

int Division() {
    result = num1 / num2;

    return result;

}



int Quadratic() {
    double a, b, c, x, x1, x2, delta, realpart, imgpart;
    
    

    printf("input your a: ");
    scanf("%lf", &a);
    
    printf("input your b: ");
    scanf("%lf", &b);

    printf("input your c: ");
    scanf("%lf", &c);
    
    

    if (a==0) {
        
        x = -c / b;
        printf("x = %.2lf", x);
    } else {
        
        delta = b * b - 4 * a * c;
        if (delta > 0 ) {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("x1 = %.2lf\nx2 = %.2lf", x1, x2);
        } else if (delta == 0) {
            x = -b /(2 * a);
            printf("x = %.2lf", x);
        } else{
            realpart = -b /(2 * a);
            imgpart = sqrt(-delta) / (2 * a);
            printf("x1 = %.2lf+%.2lfi\nx2 = %.2lf-%.2lfi", realpart, imgpart, realpart, imgpart);
        }

        
        
    }    

        

    return 0;
}


int main() {
    char operation, yes;
    int option;
    yes = 'y';
    
    

    while(yes == 'y' || yes == 'Y') {
        
        
        printf("1-solve equation\n");
        printf("2-Simple calculations\n");
        printf("Choose: ");
        scanf("%d", &option);
        
        if (option == 1){ 
            Quadratic();
        } else if (option == 2){


            printf("select an operation (+ - * /): ");
            scanf(" %c", &operation);

            printf("Enter num 1: ");
            scanf("%lf", &num1);

            printf("Enter num2: ");
            scanf("%lf", &num2);


            switch (operation) {
                case '+':
                    Addition();
                    break;
                case '-':
                    Subtraction();
                    break;
                case '*':
                    Multiplication();
                    break;
                case '/':
                    Division();
                    break;

                default: 
                    printf("Invalid operation\n");
                    continue;
            } 
            
            printf("%g %c %g = %g", num1, operation, num2, result);
            

        }
        printf("\nContinue(Y/N): ");
        scanf(" %c", &yes);
        printf("------------------------------------------------------------\n");
    }

    return 0;
}