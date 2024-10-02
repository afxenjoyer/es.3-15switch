#include <stdio.h>

int main(void)
{
    char categoria;
    float prezzo;

    printf("Inserisci la categoria di cui fai parte\n");
    printf("|P=Pensionato S=Studente D=Disoccupato|\n");
    scanf("%c", &categoria);
    printf("Inserisci il prezzo del biglietto\n");
    scanf("%f", &prezzo);

    switch (categoria)
    {
        case 'P':
        case 'p':
            prezzo = prezzo - (prezzo/100)*10;
            break;
        case 'S':
        case 's':
            prezzo = prezzo + (prezzo/100)*15;
            break;
        case 'D':
        case 'd':
            prezzo = prezzo - (prezzo/100)*25;
            break;
        default:
            printf("Non esiste quella categoria, riprova\n");

    }
    printf("Il biglietto costerà %.2f\n", prezzo);

    return 0;
}
