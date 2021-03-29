#include <stdio.h>

int main(){
    printf("choose from the following\n\n");

    puts("1. addition        2. multiplication \n 3. subtraction      4. division");

    int choose;
    printf("\nchoose from the above: ");
    scanf("%d", &choose);

    if (choose == 1){

        int wanted;
        printf("how many numbers do you want to add: ");
        scanf("%d", &wanted);

        int count = 0;
        int added = 0;
        puts("\n enter the numbers that you want to add below");
        while (count < wanted){
            int number = 0;

            printf(">");
            scanf("%d", &number);
            
            added += number;
            count += 1;

        }
        printf("the result is %d", added);

    }

    if (choose == 2){

        int wanted;
        printf("how many numbers do you want to mutiply: ");
        scanf("%d", &wanted);

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
        printf("the result is %d", multiplied);


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

        printf("\n %f / %f = %f", num1, num2, div);

    }

}