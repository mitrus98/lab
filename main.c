//Autor: Michał Mitura
//Wersja: 1.0






#include <stdio.h>
#include "pola_figur.h"
#include "objetosci_figur.h"

int main(void)
{
    float dane_wejsciowe,wynik;
    int menu=0;

        while(1)
    {

        printf("______MENU KALKULATORA FIGUR______ \n"
               "1:Pole kwadratu\n"
               "2:Pole i objętość sześcianu\n"
               "3:Wyczyść ekran\n"
               "4:Wyjście\n"
               "##################################\n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            printf("Podaj a:");
            scanf("%f",&dane_wejsciowe);
            if(dane_wejsciowe>=1)
            {
            wynik = pole_kwadratu(dane_wejsciowe);
            printf("%f",wynik);printf("m2\n");
            break;
            }
            else{
                printf("a nie może być ujemne!");
                break;
            }
        case 2:
            printf("Podaj a:");
            scanf("%f",&dane_wejsciowe);
            if(dane_wejsciowe>=1)
            {
                wynik=pole_szescianu(dane_wejsciowe);
                printf("%f",wynik);printf("m2\n");
                wynik = objetosc_figury(dane_wejsciowe);
                printf("%f",wynik);printf("m3\n");
                break;
            }
            else{
                printf("a nie może być ujemne!");
                break;
            }
        case 3:
            printf("\e[1;1H\e[2J");
            break;
        case 4:
            return 0;
        default:
            printf("Nie ma takiej opcji w menu!");
        }

}
    printf("Coś poszło nie tak!");
    return 0;
}
