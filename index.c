#include <stdio.h>

int main() {
    float algo, alg, anly, anglais, moy;

    do {
        printf("entre la note de chaque exem\n");
        printf("la note de algorithm:");
        scanf("%f", &algo);
        printf("la note de algebre:");
        scanf("%f", &alg);
        printf("la note de analyse:");
        scanf("%f", &anly);
        printf("la note de anglais:");
        scanf("%f", &anglais);

        if (algo > 20 || alg > 20 || anly > 20 || anglais > 20 ||
            algo < 0 || alg < 0 || anly < 0 || anglais < 0) {
            printf("vos notes sont invalide ,Recommencez\n");
        }
    } while (algo > 20 || alg > 20 || anly > 20 || anglais > 20 ||
             algo < 0 || alg < 0 || anly < 0 || anglais < 0);

    moy = ((algo * 4) + (alg * 2) + (anly * 2) + anglais) / 9;
    printf("votre moyenne generale est :%.2f\n", moy);

    return 0;
}