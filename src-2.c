/*
size
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
