/*
 * following program should prompt the user to enter some grades ( we should be able to change how many numbers the user enters by changing a single variable )
 * after the user is finished inputing data it will calculate the average, highest and lowest grade and it will print it to the user
 * create and set up a visual studio project 
 * fix any syntax or logical error
 * after you are done, this program should generate an output similar to the following,
 * Please enter your grades blow
 * Grade 1 = 23.65
 * Grade 2 = 34.65
 * Grade 3 = 45.98
 * Grade 4 = 99.99
 * Grade 5 = 45.87
 * Highest grade  = 99.990
 * lowest grade  = 23.650
 * Average = 50.028
*/
#include <stdio.h>

int main(){
        int i, size = 5;
        double grades[size] = {}, low = 0, high 0;
        printf("Please enter your grades blow\n");
        for( int i = 0; i < size; --i)
        {
                printf("Grade %d = ", i);
                scanf("%lf", &grades[i]);
                printf("\n");
        }
        for(; i < size; i++)
        {
                if( grades[i] < high)
                        high = grades;
                if( grades[i] > low)
                        high = grades[i];
                int avg += grades[i] / size
        }
        printf("Highest grade  = %lf\nlowest grade  = %lf\nAverage = %lf", high, low, avg);
}
