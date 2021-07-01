
#include <stdio.h>

int main()
{
    

    printf( "Nettopreis eingeben:\n");
    double preis;

    scanf("%lf", &preis);
    double Bruttopreis = preis * 1.2;
    double Rechnungsbetrag = Bruttopreis * 0.98;

    printf("%-20s %-4s %-.2lf\n", "Nettopreis" ,"Euro", preis);
    printf("%-20s %-4s %-.2lf\n", "+ 20% MwSt", "Euro", preis*0.2);
    printf("%-30s", "==============================================\n");
    printf("%-20s %-4s %-.2lf\n", "Bruttopreis", "Euro", Bruttopreis);
    printf("%-20s %-4s %-.2lf\n", "- 2% Skonto", "Euro", Bruttopreis*0.02);
    printf("%-30s", "==============================================\n");
    printf("%-20s %-4s %-.2lf\n", "Rechnungsbetrag", "Euro", Rechnungsbetrag);
    scanf("%lf", &preis);
    

}
