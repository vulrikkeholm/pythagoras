#include <stdio.h>
#include <math.h>

int main(void)
{
    int m,
        n,
        side1,
        side2,
        hypotenuse,
        num;

    char try_again = 'j';

    printf("********************************************************************************\n");
    printf("****************************Velkommen til Pythagoras2***************************\n");
    printf("********************************************************************************\n");

    while (try_again == 'j' || try_again == 'J') {
        printf("Dette program beregner pythagoraeiske talsaet ud fra to heltal m og n, hvor m>n:\n");
        printf("Side 1 = m^2-n^2\n");
        printf("Side 2 = 2mn\n");
        printf("Hypotenusen = m^2+n^2\n");
        printf("Indtast venligst dit ene heltal\n");
        scanf("%d", &m);
        printf("Du valgte tallet %d.\n", m);
        printf("Indtast venligst dit andet heltal, der er mindre end dit foerste tal \n");
        scanf("%d", &n);
        printf("Du valgte tallet %d.\n", n);

        side1 = m * m - n * n;
        printf("Den ene side er %d,\n", side1);

        side2 = 2 * m * n;
        printf("den anden side er %d og \n", side2);

        hypotenuse = m * m + n * n;
        printf("hypotenusen er %d.\n", hypotenuse);
        printf("********************************************************************************\n");
        printf("Proev igen? Tast J \n");
        printf("Afslut? Tast et vilkaarligt tegn\n");
        scanf(" %c", &try_again);
    }
    return 0;
}
