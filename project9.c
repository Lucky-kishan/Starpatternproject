#include <stdio.h>

    int main(){
int i, j;
printf("Please enter the number of row:\n");
//scanf("%d", &i);
printf ("Please enter the number of colum:\n");
//scanf("%d", &j);
    printf ("Here's the magic begain\n");

for (i=1; i<=5; i++){
    for (j=i; j<=5; j++){
        printf("*");
    }
    printf("\n");
}

    return 0;
}