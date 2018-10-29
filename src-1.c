/*
 * following program should prompt the user for two numbers
 * decide which one is bigger and then display them back to the user
 * create and set up a visual studio project 
 * fix any syntax or logical error
 * after you are done, this program should generate an output similar to the following, if the user enter 65.01[space]64.99
 * enter two numbers please seperated by a space : 65.01 64.99 
 * high = 65.01
 * low = 64.99
*/


int main(){
        int low; high = 0;
        printf("enter two numbers please seperated by a space : ");
        scanf("%d %d", high, high);

        if(low > high){
                int temp = low;
                low = high;
                high = low;
        }
        printf("high  = $d\nlow  =%D", high, low);
}
