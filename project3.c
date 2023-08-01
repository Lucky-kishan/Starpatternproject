#include <stdio.h>

    int main(){
int i, j, row, colum;
printf("Please enter the number of row:\n");
scanf("%d", &row);
printf("Please enter the number of colum:\n");
scanf("%d", &colum);
for (i=1; i<=row; i++){
    for(j=1; j<=colum; j++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}