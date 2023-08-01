#include <stdio.h>

    int main(){
for (int i=1; i<=5; i++){
    for (int j=i; j<=5; j++){
        if (j>i){
            printf ("*");
        }
        else {
            printf (" ");
        }
    }
    printf ("\n");
}
    return 0;
}