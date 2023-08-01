#include <stdio.h>

    int main(){
int i, j;
printf ("Please enter the row:\n");
scanf ("%d", &i);
printf("Please enter the colum:\n");
scanf("%d", &j);
for (i=5; i>0; i--){
    for(j=1; j<=5; j++){
        if (j<i){
        printf(" ");
        }
        else{
            printf("*");
        }
       
    }
     printf("\n");
}
    return 0;
}