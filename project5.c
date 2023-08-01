#include <stdio.h>

    int main(){
int i, j, rows;
printf("Please enter the number of rows:\n");
scanf("%d", &rows);
for(i=1; i<=rows; i++){
    for (j=i; j<=rows; j++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}