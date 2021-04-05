#include <stdio.h>
#include <math.h>

int main(){

    puts("------------------");
    puts("Simple Calculator");
    puts("------------------");
    
    int choose = 0;

    while (choose != 10){

        printf("\n\n");
        puts(" 1. addition         2. multiplication \n\n 3. subtraction      4. division    \n\n 5. square_root      6. average         \n\n 7. mean             8. median 0. quit");

        printf("\n");
        printf("choose from the above: ");
        scanf("%d", &choose);

        printf("\n");

        //addition
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

        //multiplication
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

        //subtraction
        if (choose == 3){

            int num1, num2;

            printf("enter the first number: ");
            scanf("%d", &num1);

            printf("enter the second number: ");
            scanf("%d", &num2);

            int sub = num1 - num2;

            printf("\n %d - %d = %d", num1, num2, sub);

        }

        

        //division
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


        //square root
        if (choose == 5){
            
            int number;

            printf("enter a number: ");
            scanf("%d", &number);

            double square_root = sqrt(number);

            printf("\nthe square root of %d is %f", number, square_root);

        }

        //average
        if (choose == 6){

            int wanted;
            printf("caculate average of how many numbers: ");
            scanf("%d", &wanted);

            printf("\n");

            int count = 0;
            int added = 0;

            puts("enter the numbers that you want to calculate the average for (hit enter after each input)");

            while (count < wanted){
                int number = 0;

                printf("> ");
                scanf("%d", &number);
                
                added += number;
                count += 1;

            }
            double average;

             average = added / count;

            printf("the average is %f", average);

        }

        

        //mean
        if (choose == 7){

            int wanted;
            printf("calculate mean of how many numbers: ");
            scanf("%d", &wanted);

            printf("\n");

            int count = 0;
            int added = 0;

            puts("enter the numbers that you want to calculate the mean for (hit enter after each input)");

            while (count < wanted){
                int number = 0;

                printf("> ");
                scanf("%d", &number);
                
                added += number;
                count += 1;

            }

            double average;

             average = added / count;

            printf("the mean is %f", average);

        

        }

        //median
        if (choose == 8){

            int count = 0;
            int wanted;
            printf("cacluate the median how many numbers: ");
            scanf("%d", &wanted);

            int median_array[wanted];

            puts("enter the numbers that you want to calculate the median for (hit enter after each input)");
            
            //cacluate the median
            float  median;
            while (count < wanted){
                int number = 0;
                
                printf("> ");
                scanf("%d", &number);
                
                median_array[count] = number;
                
                count++;

            }

            wanted = wanted;

            if(wanted % 2 == 0){

                    median = ((float)median_array[(wanted / 2) - 1] + median_array[(wanted / 2)]) / 2;
            }else{

                median = median_array[(wanted / 2 )];

            }
            printf("\nthe median is %f", median);





        }
    }
}