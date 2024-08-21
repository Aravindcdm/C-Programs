#include <stdio.h>
int main() {
    int n = 5;  
    int x = n; 
    int y = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
                printf("%d", y);
            } 
            else if(j == (n - i - 1)){
                printf("%d", x);
            } 
            else {
                printf(" ");
            }
        }
        y++;
        x--;
        printf("\n");
    }
    return 0;
}
