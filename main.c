#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "farben.h"
#include <time.h>

int main()
{
    system("chcp 1252");
    srand(time(NULL));
    rand();
    clear();

    color(32);
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("+                                                                                                                     +\n");
    printf("+                                                                                                                     +\n");
    printf("+                                                                                                                     +\n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");

    cursor_pos(3,48);
    color(33);
    printf("Mir ist kein Name eingefallen\n\n\n\n");

    char name[50];

    color(0);
    printf("Gib bitte deinen Namen ein: ");
    fgets(name, 50, stdin);

    name[strcspn/*string complement span*/(name, "\n")] = 0;

    /*strcspn sucht in einem String nach dem ersten Vorkommen eines Zeichens aus einer Gruppe von angegebenen Zeichen und gibt den Index dieses Zeichens zurück.
    Anders ausgedrückt, es zählt die Anzahl der Zeichen im String, die vor dem ersten Auftreten eines Zeichens aus der gegebenen Gruppe erscheinen.

    strcspn(const char *str1, const char *str2);

    Parameter:
    str1: Der String, der durchsucht wird.
    str2: Eine Gruppe von Zeichen (als String), nach denen in str1 gesucht wird.*/

    int punkte=0, auswahl, max = 0, auswahl2;
    float prozent;

    printf("\nHallo %s, was möchtest du heute machen?\n", name);

    printf("(1) Rechenaufgaben \n(2) Timer\n-> ");
    scanf("%d", &auswahl);

        if(auswahl==1)
        {
                int operator1;
                int a,b, ergebnis;

                printf("Möchtest du dir Zahlen ausdenken (1) oder welche generieren lassen (2)\n-> ");
                scanf("%d", &auswahl);
                while(getchar()!='\n');
                printf("\nWelches der folgenden Rechenarten möchteste du üben?\n(1) Addition\n(2) Subtraktion\n");
                printf("(3) Multiplikation\n(4) Division\n(5) Modulo\n-> ");
                scanf("%d", &operator1);
                system("cls");

                do
                {
                    if(operator1==1)
                    {
                        if(auswahl==1)
                        {
                            printf("\nGib jetzt die Operanden ein: \n");
                            printf("  ");
                            scanf("%d",&a);
                            while(getchar()!='\n');
                            printf("+ ");
                            scanf("%d", &b);
                            printf("= ");
                            scanf("%d", &ergebnis);
                            while(getchar()!='\n');
                                if(ergebnis==a+b)
                                {
                                    color(32);
                                    printf("\nKorrekt!\n");
                                    max++;
                                    punkte++;
                                    color(36);
                                    printf("Punktzahl: %d/%d", punkte, max);

                                }
                                else if(ergebnis!=a+b)
                                {
                                    color(31);
                                    printf("\nEs war leider falsch.\nRichtige Antwort war: %d\n",a+b);
                                    max++;
                                    color(36);
                                    printf("Punktzahl: %d/%d", punkte, max);
                                }
                            color(0);
                            printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                            scanf("%d", &auswahl2);
                            while(getchar()!='\n');
                            system("cls");
                        }

                        else if(auswahl==2)
                        {
                            a=rand()%100+1;
                            b=rand()%100+1;
                            printf("  %d\n+ %d\n= ", a, b);
                            scanf("%d", &ergebnis);
                            while(getchar()!='\n');

                            if(ergebnis==a+b)
                            {
                                color(32);
                                printf("\nKorrekt!\n");
                                max++;
                                punkte++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);

                            }
                            else if(ergebnis!=a+b)
                            {
                                color(31);
                                printf("\nEs war leider falsch.\nRichtige Antwort war: %d\n",a+b);
                                max++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);
                                color(0);
                            }
                            color(0);
                            printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                            scanf("%d", &auswahl2);
                            while(getchar()!='\n');
                            system("cls");
                        }
                    }

                    else if(operator1==2)
                    {
                        if(auswahl==1)
                        {
                                printf("\nGib jetzt die Operanden ein: \n");
                                printf("  ");
                                scanf("%d",&a);
                                while(getchar()!='\n');
                                printf("- ");
                                scanf("%d", &b);
                                printf("= ");
                                scanf("%d", &ergebnis);
                                while(getchar()!='\n');
                                    if(ergebnis==a-b)
                                    {
                                        color(32);
                                        printf("\nKorrekt!\n");
                                        max++;
                                        punkte++;
                                        color(36);
                                        printf("Punktzahl: %d/%d", punkte, max);

                                    }
                                    else if(ergebnis!=a-b)
                                    {
                                        color(31);
                                        printf("\nEs war leider falsch.\nRichtige Antwort war: %d\n",a-b);
                                        max++;
                                        color(36);
                                        printf("Punktzahl: %d/%d", punkte, max);
                                    }
                                color(0);
                                printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                                scanf("%d", &auswahl2);
                                while(getchar()!='\n');
                                system("cls");
                        }

                        else if(auswahl==2)
                        {
                            a=rand()%100+1;
                            b=rand()%100+1;
                            printf("  %d\n- %d\n= ", a, b);
                            scanf("%d", &ergebnis);
                            while(getchar()!='\n');

                            if(ergebnis==a-b)
                            {
                                color(32);
                                printf("\nKorrekt!\n");
                                max++;
                                punkte++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);

                            }
                            else if(ergebnis!=a-b)
                            {
                                color(31);
                                printf("\nEs war leider falsch.\nRichtige Antwort war: %d\n",a-b);
                                max++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);
                                color(0);
                            }
                            color(0);
                            printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                            scanf("%d", &auswahl2);
                            while(getchar()!='\n');
                            system("cls");
                        }

                    }
                    else if(operator1==3)
                    {
                        if(auswahl==1)
                        {
                                printf("\nGib jetzt die Operanden ein: \n");
                                printf("  ");
                                scanf("%d",&a);
                                while(getchar()!='\n');
                                printf("* ");
                                scanf("%d", &b);
                                printf("= ");
                                scanf("%d", &ergebnis);
                                while(getchar()!='\n');
                                    if(ergebnis==a*b)
                                    {
                                        color(32);
                                        printf("\nKorrekt!\n");
                                        max++;
                                        punkte++;
                                        color(36);
                                        printf("Punktzahl: %d/%d", punkte, max);

                                    }
                                    else if(ergebnis!=a*b)
                                    {
                                        color(31);
                                        printf("\nEs war leider falsch.\nRichtige Antwort war: %d\n",a*b);
                                        max++;
                                        color(36);
                                        printf("Punktzahl: %d/%d", punkte, max);
                                    }
                                color(0);
                                printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                                scanf("%d", &auswahl2);
                                while(getchar()!='\n');
                                system("cls");
                        }

                        else if(auswahl==2)
                        {
                            a=rand()%20+1;
                            b=rand()%10+1;
                            printf("  %d\n* %d\n= ", a, b);
                            scanf("%d", &ergebnis);
                            while(getchar()!='\n');

                            if(ergebnis==a*b)
                            {
                                color(32);
                                printf("\nKorrekt!\n");
                                max++;
                                punkte++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);

                            }
                            else if(ergebnis!=a*b)
                            {
                                color(31);
                                printf("\nEs war leider falsch.\nRichtige Antwort war: %d\n",a*b);
                                max++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);
                                color(0);
                            }
                            color(0);
                            printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                            scanf("%d", &auswahl2);
                            while(getchar()!='\n');
                            system("cls");
                        }

                    }
                    else if(operator1==4)
                    {
                        if(auswahl==1)
                        {
                                printf("\nGib jetzt die Operanden ein: \n");
                                printf("  ");
                                scanf("%d",&a);
                                while(getchar()!='\n');
                                printf("/ ");
                                scanf("%d", &b);
                                printf("= ");
                                scanf("%d", &ergebnis);
                                while(getchar()!='\n');
                                    if(ergebnis==a/b)
                                    {
                                        color(32);
                                        printf("\nKorrekt!\n");
                                        max++;
                                        punkte++;
                                        color(36);
                                        printf("Punktzahl: %d/%d", punkte, max);

                                    }
                                    else if(ergebnis!=a/b)
                                    {
                                        color(31);
                                        printf("\nEs war leider falsch.\nRichtige Antwort war: %d\n",a/b);
                                        max++;
                                        color(36);
                                        printf("Punktzahl: %d/%d", punkte, max);
                                    }
                                color(0);
                                printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                                scanf("%d", &auswahl2);
                                while(getchar()!='\n');
                                system("cls");
                        }

                        else if(auswahl==2)
                        {
                            a=rand()%100+1;
                            b=rand()%10+1;
                            printf("  %d\n/ %d\n= ", a, b);
                            scanf("%d", &ergebnis);
                            while(getchar()!='\n');

                            if(ergebnis==a/b)
                            {
                                color(32);
                                printf("\nKorrekt!\n");
                                max++;
                                punkte++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);

                            }
                            else if(ergebnis!=a/b)
                            {
                                color(31);
                                printf("\nEs war leider falsch.\nRichtige Antwort war: %d\n",a/b);
                                max++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);
                                color(0);
                            }
                            color(0);
                            printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                            scanf("%d", &auswahl2);
                            while(getchar()!='\n');
                            clear();
                        }

                    }
                    else if(operator1==5)
                    {
                        if(auswahl==1)
                        {
                                printf("\nGib jetzt die Operanden ein: \n");
                                printf("  ");
                                scanf("%d",&a);
                                while(getchar()!='\n');
                                printf("%% ");
                                scanf("%d", &b);
                                printf("= ");
                                scanf("%d", &ergebnis);
                                while(getchar()!='\n');
                                    if(ergebnis==a%b)
                                    {
                                        color(32);
                                        printf("\nKorrekt!\n");
                                        max++;
                                        punkte++;
                                        color(36);
                                        printf("Punktzahl: %d/%d", punkte, max);

                                    }
                                    else if(ergebnis!=a%b)
                                    {
                                        color(31);
                                        printf("\nEs war leider falsch.\n");
                                        max++;
                                        color(36);
                                        printf("Punktzahl: %d/%d", punkte, max);
                                    }
                                color(0);
                                printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                                scanf("%d", &auswahl2);
                                while(getchar()!='\n');
                                system("cls");
                        }

                        else if(auswahl==2)
                        {
                            a=rand()%100+1;
                            b=rand()%10+1;
                            printf("  %d\n%% %d\n= ", a, b);
                            scanf("%d", &ergebnis);
                            while(getchar()!='\n');

                            if(ergebnis==a%b)
                            {
                                color(32);
                                printf("\nKorrekt!\n");
                                max++;
                                punkte++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);

                            }
                            else if(ergebnis!=a%b)
                            {
                                color(31);
                                printf("\nEs war leider falsch.\nRichtige Antwort war: %d\n",a%b);
                                max++;
                                color(36);
                                printf("Punktzahl: %d/%d", punkte, max);
                                color(0);
                            }
                            color(0);
                            printf("\n\nMöchtest du eine weitere Aufgabe lösen?\n(1) Ja\n(0) Nein\n");
                            scanf("%d", &auswahl2);
                            while(getchar()!='\n');
                            clear();
                        }

                    }

                }
                while(auswahl2==1);
                color(36);
                printf("Deine gesammte Punktzahl beträgt: %d/%d", punkte, max);
                prozent=(100/max)*punkte;
                printf("\nDu hast insgesamt %.0f%% der Aufgaben richtig gelöst.", prozent);
                if(prozent<=85)
                {
                    color(31);
                    printf("\nDu musst mehr üben %s!", name);
                }
                else if(prozent>=85)
                {
                    color(32);
                    printf("\nGute Arbeit %s!", name);
                }
                color(0);
                auswahl=0;
        }


        if(auswahl==2)
        {
            int timer, i, sek;
            printf("\nWie lange soll der Timer laufen: ");
            scanf("%d", &timer);
            while(getchar()!='\n');
            sek=timer;

            for(i=1;i<=timer;i++)
            {
                printf(" %d ", sek);
                sek--;
                sleep(1);

                if(sek<=5)
                {
                    color(31);
                }
            }
            color(0);
        }

    return 0;


}
