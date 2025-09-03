#include <stdio.h>
#include <stdlib.h>

int main () {
    int valeur[5] = {5, 71, 242, 1520, 20405}, i;
    for (i = 0; i <= 4; i++) {
        printf("La valeur %d dans le tableaux est: %d\n", i + 1, valeur[i]);
    }
    return 0;
}
