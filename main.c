#include <stdio.h>
#include <math.h>

int main() {
    int choix, n, i;
    double num1, num2, resultat, sum, num;

    do {
        printf("1. Addition\n");
        printf("2. Soustraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Moyenne\n");
        printf("6. Valeur absolue\n");
        printf("7. Exponentiation\n");
        printf("8. Racine carrée\n");
        printf("9. Quitter\n");
        printf("================\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        if (choix == 1) {
            // Addition
            printf("Combien de nombres voulez-vous additionner? ");
            scanf("%d", &n);
            sum = 0;
            for (i = 0; i < n; i++) {
                printf("Entrez le nombre %d : ", i + 1);
                scanf("%lf", &num);
                sum += num;
            }
            printf("La somme est : %.2lf\n", sum);

        } else if (choix == 2) {
            // Soustraction
            printf("Entrez le premier nombre : ");
            scanf("%lf", &num1);
            printf("Entrez le deuxième nombre : ");
            scanf("%lf", &num2);
            printf("Le résultat de la soustraction est : %.2lf\n", num1 - num2);

        } else if (choix == 3) {
            // Multiplication
            printf("Combien de nombres voulez-vous multiplier? ");
            scanf("%d", &n);
            resultat = 1;
            for (i = 0; i < n; i++) {
                printf("Entrez le nombre %d : ", i + 1);
                scanf("%lf", &num);
                resultat *= num;
            }
            printf("Le produit est : %.2lf\n", resultat);

        } else if (choix == 4) {
            // Division
            printf("Entrez le numérateur : ");
            scanf("%lf", &num1);
            do {
                printf("Entrez le dénominateur (différent de 0) : ");
                scanf("%lf", &num2);
                if (num2 == 0) {
                    printf("Erreur : division par zéro. Veuillez réessayer.\n");
                }
            } while (num2 == 0);
            printf("Le résultat de la division est : %.2lf\n", num1 / num2);

        } else if (choix == 5) {
            // Moyenne
            printf("Combien de nombres voulez-vous pour la moyenne? ");
            scanf("%d", &n);
            sum = 0;
            for (i = 0; i < n; i++) {
                printf("Entrez le nombre %d : ", i + 1);
                scanf("%lf", &num);
                sum += num;
            }
            printf("La moyenne est : %.2lf\n", sum / n);

        } else if (choix == 6) {
            // Valeur absolue
            printf("Entrez un nombre : ");
            scanf("%lf", &num);
            printf("La valeur absolue de %.2lf est : %.2lf\n", num, fabs(num));

        } else if (choix == 7) {
            // Exponentiation
            printf("Entrez la base : ");
            scanf("%lf", &num1);
            printf("Entrez l'exposant : ");
            scanf("%lf", &num2);
            printf("%.2lf à la puissance %.2lf est : %.2lf\n", num1, num2, pow(num1, num2));

        } else if (choix == 8) {
            // Racine carrée
            do {
                printf("Entrez un nombre positif pour calculer la racine carrée : ");
                scanf("%lf", &num);
                if (num < 0) {
                    printf("Erreur : le nombre doit être positif. Veuillez réessayer.\n");
                }
            } while (num < 0);
            printf("La racine carrée de %.2lf est : %.2lf\n", num, sqrt(num));

        } else if (choix == 9) {
            // Quitter
            printf("Au revoir!\n");

        } else {
            printf("Choix invalide, veuillez réessayer.\n");
        }

    } while (choix != 9);

    return 0;
}

