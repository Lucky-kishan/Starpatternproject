#include <stdio.h>

    int main(){
int i, j, rows, colums;
printf("Please enter the row number;\n");
scanf("%d", &rows);
printf("Please enter the colums number :\n");
scanf("%d", &colums);
for (i=1; i<=rows; i++){
    for (j=1; j<=colums; j++){
        printf("*");
    }
    printf("\n");
}

    return 0;
}