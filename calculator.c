#include <stdio.h>
#include <math.h>

int main(){

    puts("------------------");
    puts("Simple Calculator");
    puts("------------------");
    
    int choose = 0;

    while (choose != 6){

        printf("\n\n");
        puts(" 1. addition         2. multiplication \n\n 3. subtraction      4. division    \n\n 5.square_root        6.quit");

        printf("\n");
        printf("choose from the above: ");
        scanf("%d", &choose);

        printf("\n");

        if (choose == 1){

            int wanted;
            printf("how many numbers do you want to add: ");
            scanf("%d", &wanted);

            printf("\n");

            int count = 0;
            int added = 0;

            puts("enter the numbers that you want to add below (hit enter after each input)");

            while (count < wanted){
                int number = 0;

                printf("> ");
                scanf("%d", &number);
                
                added += number;
                count += 1;

            }
            printf("the result is %d ", added);

        }

        if (choose == 2){

            int wanted;

            printf("how many numbers do you want to mutiply: ");
            scanf("%d", &wanted);

            printf("\n");


            int count = 0;
            int multiplied = 1;

            puts("\n enter the numbers that you want to multiply below");

            while (count < wanted){
                int number = 0;

                printf(">");
                scanf("%d", &number);
                
                multiplied *= number;
                count += 1;

            }

            printf("\nthe result is %d ", multiplied);


        }

        if (choose == 3){

            int num1, num2;

            printf("enter the first number: ");
            scanf("%d", &num1);

            printf("enter the second number: ");
            scanf("%d", &num2);

            int sub = num1 - num2;

            printf("\n %d - %d = %d", num1, num2, sub);

        }

        if (choose == 4){

            float num1, num2;

            printf("enter the first number: ");
            scanf("%f", &num1);

            printf("enter the second number: ");
            scanf("%f", &num2);

            double div = num1 / num2;

            printf("\n %f / %f = %f ", num1, num2, div);
            continue;


        }

        if (choose == 5){
            
            int number;

            printf("enter a number: ");
            scanf("%d", &number);

            double square_root = sqrt(number);

            printf("\nthe square root of %d is %f", number, square_root);

        }
    }

}