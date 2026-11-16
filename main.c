#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265
#include <math.h>


int main() {
    // --- question 2 (a) ---
    int a, b;
    printf("--- Exercice (a) ---\n");
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    printf("Somme : %d\n", a + b);
    if (b != 0) {
        printf("Quotient : %d\n", a / b);
        printf("Reste : %d\n", a % b);
    } else {
        printf("Division par zero impossible.\n");
    }

    // --- question 2 (b) ---
    float rayon, surface, perimetre;
    printf("\n--- Exercice (b) ---\n");
    printf("Entrez le rayon du cercle : ");
    scanf("%f", &rayon);

    perimetre = 2 * PI * rayon;
    surface = PI * rayon * rayon;

    printf("Perimetre : %.3f\n", perimetre);
    printf("Surface : %.3f\n", surface);

    // --- question 2 (c) ---
    float h1, h2, T1, brut, prime, retenue, net;
    printf("\n--- Exercice (c) ---\n");
    printf("Entrez h1, T1 et h2 : ");
    scanf("%f %f %f", &h1, &T1, &h2);

    brut = (h1 * T1) + (h2 * (2 * T1));
    prime = brut * 0.10;
    retenue = (brut + prime) * 0.06;
    net = brut + prime - retenue;

    printf("Montant brut : %.3f\n", brut);
    printf("Montant de la prime : %.3f\n", prime);
    printf("Montant de la retenue : %.3f\n", retenue);
    printf("Montant net : %.3f\n", net);

    // --- question 2 (d) ---
    int t, h, m, s;
    printf("\n--- Exercice (d) ---\n");
    printf("Entrer une duree t:");
    scanf("%d", &t);
    h = t / 3600;
    t = t - h * 3600;
    m = t / 60;
    t = t - m * 60;
    s = t;
    printf("la date est : %dh %dm %ds", h, m, s);


    // --- question 2 (e) ---
    int d, j, mo, an;
    printf("\n--- Exercice (e) ---\n");
    printf("Entrer la date:");
    scanf("%d", &d);
    j = d / 10000;
    mo = d / 100;
    mo = mo % 100;
    an = d % 100;
    printf("jour : %d Mois : %d Annee : 20%d", j, mo, an);

    // ---question 2 (f) ---
    int x1, x2, y1, y2;
    double D;
    printf("\n--- Exercice (f) ---\n");
    printf("donner les coordonnees de x :");
    scanf("%d %d",&x1, &x2);
    printf("donner les coordonnees de y :");
    scanf("%d, %d",&y1, &y2);
    D = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("la distance entre x et y est : %f",D);
    return 0;
}
