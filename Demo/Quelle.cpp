#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h> //z.B. für runden von kommazahlen (Zinsberechnung roundf())

#define ROT(string) "\x1b[91m" string "\x1b[0m"     //rote schrift
#define GELB(string) "\x1b[93m" string "\x1b[0m"    //gelbe schrift

#define CLEAR() system("cls"),printf("\x1b[36mC DEMO | E1FI1\n\x1b[90mJohannes Hundt\x1b[0m\n\n"); //konsole leeren und header ausgeben


//Menüs
void fnMenueSchleifen(void);
void fnMenueSterne(void);
void fnMenueRekursion(void);
//Hauptfunktionen
void fnSchleifenWhile(void);
void fnSchleifenFor(void);
void fnSchleifenDoWhile(void);
void fnSterneEinzeilig(void);
void fnSterneMehrzeilig(void);
void fnZinsberechnung(void);
void fnGauss(void);
void fnLottozahlen(void);
void fnRekursionDirekt(void);
void fnRekursionIndirekt(void);
void fnZeiger(void);
void fnNotendurchschnitt(void);
void fnDatentypen(void);
void fnBitByte(void);
void fnStundenplan(void);
//Hilfsfunktionen
void swap(int*, int*);
double durchschnitt(double vektor[], int anzahl);
void ja(int);
void nein(int);
long long int zweiHoch(int);


/* 
main
Gibt das Hauptmenü aus
*/
void main(void) {
    int auswahl; //gewählter Menüpunkt

    do {
        CLEAR();
        printf("1. > Schleifen\n");
        printf("2. > Sterne\n");
        printf("3.   Zinsberechnung\n");
        printf("4.   Gau\xe1\n");
        printf("5.   Lottozahlen\n");
        printf("6. > Rekursion\n");
        printf("7.   Zeiger\n");
        printf("8.   Notendurchschnitt\n");
        printf("9.   Datentypen\n");
        printf("10.  Bit/Byte\n");
        printf("11.  Stundenplan\n");
        printf("\n");
        printf(ROT("0.   Beenden\n\n"));
        printf("Auswahl: ");
        scanf_s("%i", &auswahl);//Auswahl abfragen
        switch (auswahl)
        {
        case 1: //Menü Schleifen
            fnMenueSchleifen();
            break;
        case 2: //Menü Sterne
            fnMenueSterne();
            break;
        case 3: //Zinsberechnung
            fnZinsberechnung();
            break;
        case 4: //Gauß
            fnGauss();
            break;
        case 5: //Lottozahlen
            fnLottozahlen();
            break;
        case 6: //Rekursion
            fnMenueRekursion();
            break;
        case 7: //Zeiger
            fnZeiger();
            break;
        case 8: //Notendurchschnitt
            fnNotendurchschnitt();
            break;
        case 9: //Datentypen
            fnDatentypen();
            break;
        case 10: //Bit/Byte
            fnBitByte();
            break;
        case 11: //Stundenplan
            fnStundenplan();
            break;
        default:
            break;
        }
    } while (auswahl != 0); //Bei 0 Beenden
}
/*
fnMenueSchleifen
Gibt das Menü für Schleifen aus
*/
void fnMenueSchleifen(void) {
    int auswahl; //gewählter Menüpunkt

    do {
        CLEAR();
        printf(GELB("Schleifen:\n"));
        printf("1. WHILE\n");
        printf("2. FOR\n");
        printf("3. DO WHILE\n");
        printf("\n");
        printf(ROT("0. Zur\x81\ck\n\n"));
        printf("Auswahl: ");
        scanf_s("%i", &auswahl);//Auswahl abfragen
        switch (auswahl)
        {
        case 1: //WHILE
            fnSchleifenWhile();
            break;
        case 2: //FOR
            fnSchleifenFor();
            break;
        case 3: //DO WHILE
            fnSchleifenDoWhile();
            break;
        default:
            break;
        }
    } while (auswahl != 0); //Bei 0 Zurück
}
/*
fnMenueSterne
Gibt das Menü für Sterne aus
*/
void fnMenueSterne(void) {
    int auswahl; //gewählter Menüpunkt

    do {
        CLEAR();
        printf(GELB("Sterne:\n"));
        printf("1. Einzeilig\n");
        printf("2. Mehrzeilig\n");
        printf("\n");
        printf(ROT("0. Zur\x81\ck\n\n"));
        printf("Auswahl: ");
        scanf_s("%i", &auswahl);//Auswahl abfragen
        switch (auswahl)
        {
        case 1: //Einzeilig
            fnSterneEinzeilig();
            break;
        case 2: //Mehrzeilig
            fnSterneMehrzeilig();
            break;
        default:
            break;
        }
    } while (auswahl != 0); //Bei 0 Zurück
}
/*
fnMenueRekursion
Gibt das Menü für Rekursion aus
*/
void fnMenueRekursion(void) {
    int auswahl; //gewählter Menüpunkt

    do {
        CLEAR();
        printf(GELB("Rekursion:\n"));
        printf("1. direkte Rekursion (2^x)\n");
        printf("2. indirekte Rekursion (ja/nein)\n");
        printf("\n");
        printf(ROT("0. Zur\x81\ck\n\n"));
        printf("Auswahl: ");
        scanf_s("%i", &auswahl);//Auswahl abfragen
        switch (auswahl)
        {
        case 1: //direkte Rekursion
            fnRekursionDirekt();
            break;
        case 2: //indirekte Rekursion
            fnRekursionIndirekt();
            break;
        default:
            break;
        }
    } while (auswahl != 0); //Bei 0 Zurück
}



/*
fnSchleifenWhile
Führt eine While-Schleife aus, solange die abgefragte Zahl kleiner gleich 0 ist.
Ist die Zahl größer Null, wird die Schleife beendet.
*/
void fnSchleifenWhile(void) {
    int zahl = 0; //abgefragte Zahl

    while (zahl <= 0) {
        CLEAR();
        printf(GELB("While Schleife:\n"));
        printf("Schleife wird ausgef\x81\hrt, solange Zahl <= 0\n");
        printf("Zahl ist %i, neue Auswahl: ", zahl);
        scanf_s("%i", &zahl);//Zahl abfragen
    }
    CLEAR();
    printf(GELB("While Schleife:\n"));
    printf("Schleife wird ausgef\x81\hrt, solange Zahl <= 0\n");
    printf("Zahl ist %i, Schleife beendet.\n\n", zahl);
    system("Pause");//Beliebige Taste drücken... 
}
/*
fnSchleifenFor
Führt eine For-Schleife für eine variable Anzahl Wiederholungen mit einem zuvor festgelegten Startwert aus.
*/
void fnSchleifenFor(void) {
    int wert;
    int startWert; //Startwert
    int wiederholungen; //anzahl Wiederholungen

    CLEAR();
    printf(GELB("For Schleife:\n"));
    printf("Startwert: ");
    scanf_s("%i", &startWert);//Startwert abfragen
    printf("Wiederholungen: ");
    scanf_s("%i", &wiederholungen);//Wiederholungen abfragen  
    //Schleife ausführen
    for (wert = startWert; wert < startWert + wiederholungen; wert++) {
        printf("Wert: %i\n", wert);
    }
    printf("Schleife beendet.\n\n");
    system("Pause");//Beliebige Taste drücken... 
}
/*
fnSchleifenDoWhile
Führt eine Do-While-Schleife aus, solange die abgefragte Zahl kleiner gleich 0 ist.
Ist die Zahl größer Null, wird die Schleife beendet.
*/
void fnSchleifenDoWhile(void) {
    int zahl = 0; //abgefragte Zahl

    do {
        CLEAR();
        printf(GELB("Do While Schleife:\n"));
        printf("Schleife wird ausgefuehrt, solange Zahl <= 0, mindestens 1 mal\n");
        printf("Zahl ist %i, neue Auswahl: ", zahl);
        scanf_s("%i", &zahl);//Zahl abfragen
    } while (zahl <= 0);//solange Zahl <= 0
    CLEAR();
    printf(GELB("Do While Schleife:\n"));
    printf("Schleife wird ausgefuehrt, solange Zahl <= 0, mindestens 1 mal\n");
    printf("Zahl ist %i, Schleife beendet.\n\n", zahl);
    system("Pause");//Beliebige Taste drücken... 
}
/*
fnSterneEinzeilig
Gibt eine variable Anzahl an Sternen einzeilig aus.
*/
void fnSterneEinzeilig(void) {
    int i;
    int anzahl; //anzahl Sterne

    CLEAR();
    printf(GELB("Sterne (einzeilig):\n"));
    printf("Anzahl Sterne: ");
    scanf_s("%i", &anzahl);//Anzahl abfragen
    //Sterne ausgeben
    for (i = 1; i <= anzahl; i++) {
        printf("*");
    }
    printf("\n\n");
    system("Pause");//Beliebige Taste drücken... 
}
/*
fnSterneMehrzeilig
Gibt eine variable Anzahl an Sternen pro Zeile aus.
Die Anzahl der Zeilen kann gewählt werden.
*/
void fnSterneMehrzeilig(void) {
    int i;
    int zeile;
    int anzahl; //anzahl Sterne pro Zeile
    int zeilen; //anzahl Zeilen

    CLEAR();
    printf(GELB("Sterne (mehrzeilig):\n"));
    printf("Anzahl Sterne pro Zeile: ");
    scanf_s("%i", &anzahl);//Sterne pro Zeile abfragen (anzahl)
    printf("Anzahl Zeilen: ");
    scanf_s("%i", &zeilen);//Zeilen abfragen
    //Sterne ausgeben
    for (zeile = 1; zeile <= zeilen; zeile++) {
        for (i = 1; i <= anzahl; i++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    system("Pause");//Beliebige Taste drücken... 
}
/*
fnZinsberechnung
Berrechnet die Anlagedauer, um aus einer angegebenen Startsumme mit einem angegebenen Zinssatz eine gewünschte Endsumme zu erreichen.
Die Berechnung findet mittels einer For-Schleife statt.
*/
void fnZinsberechnung(void) {
    double anfangssumme = 1; //Startguthaben
    double zinssatz = 1; //Zinssatz
    double endsumme = -1; //Gewünschte Endsumme
    double guthaben; //Aktuelles Guthaben
    int jahre; //Anlagedauer

    do { //anfangssumme
        CLEAR();
        printf(GELB("Zinsberechnung:\n"));
        if (anfangssumme <= 0) {
            printf(ROT("Anfangssumme darf nicht kleiner oder gleich 0 sein.\n"));
        }
        printf("Anfangssumme:\t\t ");
        scanf_s("%lf", &anfangssumme);//Anfangssumme abfragen
    } while (anfangssumme <= 0);//abfragen solange anfangssume <= 0
    do { //endsumme
        CLEAR();
        printf(GELB("Zinsberechnung:\n"));
        printf("Anfangssumme:\t\t %10.2f EUR\n",anfangssumme);
        if (anfangssumme >= endsumme && endsumme != -1) {
            printf(ROT("Endsumme darf nicht kleiner oder gleich der Anfangssumme sein.\n"));
        }
        printf("Gew\x81 \bnschte Endsumme:\t ");
        scanf_s("%lf", &endsumme);//Endsumme abfragen
    } while (anfangssumme >= endsumme);//abfragen solange anfangssume >= endsumme oder anfangssumme <= 0
    do { //zinssatz
        CLEAR();
        printf(GELB("Zinsberechnung:\n"));
        printf("Anfangssumme:\t\t %10.2f EUR\n", anfangssumme);
        printf("Gew\x81 \bnschte Endsumme:\t %10.2f EUR\n",endsumme);
        if (zinssatz <= 0) {
            printf(ROT("Zinssatz darf nicht kleiner gleich 0%% sein.\n"));
        }
        printf("Zinssatz:\t\t ");
        scanf_s("%lf", &zinssatz);//zinssatz abfragen
    } while (zinssatz <= 0);//abfragen solange zinssatz <= 0

    CLEAR();
    printf(GELB("Zinsberechnung:\n"));
    printf("Anfangssumme:\t\t %10.2f EUR\n", anfangssumme);
    printf("Gew\x81 \bnschte Endsumme:\t %10.2f EUR\n", endsumme);
    printf("Zinssatz:\t\t %10.2f %%\n",zinssatz);
    printf("\n");
    //Berechnung
    for (jahre = 0, guthaben = anfangssumme; guthaben < endsumme; jahre++){
        printf("%4i. Jahr: %10.2f EUR\t\tZinsen:%10.4f EUR\t\tGuthaben: %10.2f EUR\n",jahre+1,guthaben, guthaben * zinssatz/100, guthaben +(guthaben / 100 * zinssatz));
        guthaben += guthaben / 100 * zinssatz;
    }
    //Ausgabe
    if (jahre == 1) {
        printf("\nGuthaben nach %i Jahr: %10.2f EUR\t(Wunschsumme + %.2f EUR)\n\n", jahre, roundf(guthaben * 100) / 100, (roundf(guthaben * 100) / 100)-endsumme);//roundf() rundet auf Ganzzahl, da Cent gewollt: Guthaben verhundertfachen, runden, durch 100 teilen.
    }
    else {
        printf("\nGuthaben nach %i Jahren: %10.2f EUR\t(Wunschsumme + %.2f EUR)\n\n", jahre, roundf(guthaben * 100) / 100, (roundf(guthaben * 100) / 100) - endsumme);
    }
    system("Pause");//Beliebige Taste drücken...
}
/*
fnGauss
Addiert alle Zahlen von 1 bis gewünschtem Endwert.
Die Berechnung findet mittels einer Formel statt.
*/
void fnGauss(void) {
    int i;
    int ende; //Endwert
    int ergebnis;

    CLEAR();
    printf(GELB("Gau\xe1:\n"));
    printf("Addiere Zahlen von 1 bis: ");
    scanf_s("%i", &ende);//Ende abfragen
    //Berechnung mittels Schleife
    /*
    for (i = 1, ergebnis = 0; i <= ende; i++) {
        ergebnis += i;
    }
    */
    //Berechnung mittels Formel     x = (n * (n + 1)) / 2
    ergebnis = (ende * (ende + 1)) / 2;
    //Ausgabe
    printf("(%i * (%i + 1)) / 2 = %i\n\n", ende, ende, ergebnis);
    system("Pause");//Beliebige Taste drücken...
}
/*
fnLottozahlen
Gibt die Zahlen von 1 bis 49 aus. (7-Zeilig)
*/
void fnLottozahlen(void) {
    int zahl; //aktuelle Zahl
    int zeile; //aktuelle Zeile

    CLEAR();
    printf(GELB("Lottozahlen:\n"));
    for (zeile = 1; zeile <= 7; zeile++) { //für jede Zeile
        for (zahl = zeile*7-6; zahl <= zeile*7; zahl++) {
            /*
            zeile=1:  for(zahl =  1; zahl <=  7; zahl++)
            zeile=2:  for(zahl =  8; zahl <= 14; zahl++)
            zeile=3:  for(zahl = 15; zahl <= 21; zahl++)
            zeile=4:  for(zahl = 22; zahl <= 28; zahl++)
            zeile=5:  for(zahl = 29; zahl <= 35; zahl++)
            zeile=6:  for(zahl = 36; zahl <= 42; zahl++)
            zeile=7:  for(zahl = 43; zahl <= 49; zahl++)
            */
            printf("%3i", zahl);
        }
        printf("\n");
    }
    printf("\n");
    system("Pause");//Beliebige Taste drücken...
}
/*
fnRekursionDirekt
Berechnet die x-te potenz von 2.
Maximalwert für x ist 62, da ansonsten das Ergebnis nicht darstellbar ist (long long int)
*/
void fnRekursionDirekt(void) {
    int zahl = 0;

    do {
        CLEAR();
        printf(GELB("Direkte Rekursion:\n"));
        if (zahl > 62) { //zahl größer 62 -> overflow
            printf(ROT("Zahl muss kleiner 63 sein, da 2^63 nicht als Ergebnis darstellbar.\n\n"));
            printf("long long int (8 Byte = 64 Bit) = 2^64 Kombinationen.\n");
            printf("(2^64)/2-1  = 9.223.372.036.854.775.80" GELB("7") " darstellbare POSITIVE Zahlen.\n");
            printf("2^63        = 9.223.372.036.854.775.80" ROT("8") " variable overflow.\n\n");
        }
        printf("2^");
        scanf_s("%i", &zahl);//Zahl abfragen
    } while (zahl > 62 || zahl < -62);//zahl darf maximal 62 Betragen, da sonst Ergebnis nicht darstellbar
    printf("Ergebnis: %lld\n\n", zweiHoch(zahl));
    system("Pause");//Beliebige Taste drücken...
}
/*
fnRekursionIndirekt
Führt die Funktion ja() oder nein() mit einem beliebigen Startwert aus.
ja() und nein() rufen sich gegenseitig auf.
*/
void fnRekursionIndirekt(void) {
    int funktion; //ja()/nein()
    int zahl; //Startwert

    do {
        CLEAR();
        printf(GELB("Indirekte Rekursion:\n"));
        printf("1. Ja\n");
        printf("2. Nein\n");
        printf("Welche funktion soll aufgerufen werden?: ");
        scanf_s("%i", &funktion);//Funktion abfragen
    } while (funktion < 1 || funktion > 2);//solange auswahl nicht 1 oder 2 ist
    printf("Mit welchem Startwert soll die Funktion aufgerufen werden?: ");
    scanf_s("%i", &zahl);//Wert abfragen
    if (funktion == 1) {//auswahl JA
        ja(zahl);
    }
    else {//auswahl NEIN
        nein(zahl);
    }
    printf("\n");
    system("Pause");//Beliebige Taste drücken...
}
/*
fnZeiger
Tauscht den Zeiger von 2 Variablen.
*/
void fnZeiger(void) {
    int a = 1;
    int b = 2;

    CLEAR();
    printf(GELB("Zeiger:\n"));
    //ausgabe vor dem tausch
    printf("a=%i\t(%p)\n", a, &a);
    printf("b=%i\t(%p)\n", b, &b);
    //tausch
    printf("tausch\n");
    swap(&a, &b);
    //ausgabe nach dem tausch
    printf("a=%i\t(%p)\n", a, &a);
    printf("b=%i\t(%p)\n", b, &b);
    //Ende
    printf("\n");
    system("Pause");//Beliebige Taste drücken...
}
/*
fnNotendurchschnitt
Berechnet den Notendurchschnitt einer beliebigen Anzahl an Noten (max. 100).
*/
void fnNotendurchschnitt(void) {
    int i;
    int anzahl = 1;
    double noten[99];//maximal 100 mögliche noten
    do {
        CLEAR();
        printf(GELB("Notendurchschnitt berechnen:\n"));
        if (anzahl <= 0) {
            printf(ROT("Anzahl darf nicht kleiner gleich 0 sein.\n"));
        }
        else if (anzahl > 100) {
            printf(ROT("Maximal 100 Noten.\n"));
        }
        printf("Anzahl Noten: ");
        scanf_s("%i", &anzahl);//Anzahl abfragen
    } while (anzahl <= 0 || anzahl > 100);//anzahl muss > 0 und <= 100 sein
    for (i = 0; i < anzahl; i++) {
        int note;
        printf("%3i. Note: ", i + 1);
        scanf_s("%i", &note);//Note abfragen
        noten[i] = note;
    }
    printf("Durschnittsnote: %1.2f\n\n", durchschnitt(noten, anzahl));
    system("Pause");//Beliebige Taste drücken...
}
/*
fnDatentypen
Übersicht der in C verwendeten Datentypen.
*/
void fnDatentypen(void) {
    CLEAR();
    printf(GELB("Datentypen:\n"));
    printf(GELB("typ                 signed      byte von                        bis                         printf/scanf       \n"));
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    //char
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("char                signed      1   -128                        127                         %%c                     \n");
    printf("char                unsigned    1   0                           255                         %%c                     \n");
    printf("char                signed      1   -128                        127                         %%c                     \n");
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    //int
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("16-bit/short int    signed      2   -32.768                     32.767                      %%i,%%d,%%o,%%x,%%hi    \n");
    printf("32-bit/long int     signed      4   -2.147.483.648              2.147.483.647               %%li                    \n");
    printf("16-bit/short int    unsigned    2   0                           65.535                      %%u                     \n");
    printf("32-bit/long int     unsigned    4   0                           4.294.967.259               %%u                     \n");
    printf("long long int       signed      8   -9.223.372.036.854.775.808  9.223.372.036.854.775.807   %%I64i,%%lli            \n");
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    //float/double
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("float               signed      4   1,2E-38                     3,4E38                      %%e,%%f,%%g             \n");
    printf("double              signed      8   2,3E-308                    1,7E+308                    %%lf                    \n");
    printf("long double         signed      10  3,4E-4932                   1,1E+4932                   %%Lf                    \n");
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    //enum
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("enum                signed      2   -32.768                     32.767                                              \n");
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("\n");
    system("Pause");//Beliebige Taste drücken...
}
/*
fnBitByte
Rechnet Byte in Bit um und gibt weitere Informationen aus.
*/
void fnBitByte(void) {
    int byte;

    CLEAR();
    printf(GELB("Bit/Byte:\n"));
    printf("|  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |       8 Bit = 1 Byte\n");
    printf("-------------------------------------------------\n");
    printf("| 128 | 64  | 32  | 16  |  8  |  4  |  2  |  1  |       2^8 = 256 m\x94gliche kombinationen\n\n");
    printf("Anzahl Byte: ");
    scanf_s("%i", &byte);//Byte abfragen
    //Textausgabe
    printf("%i Byte = %i Bit.\n",byte,byte*8);
    printf("2^%i = %g m\x94gliche Kombinationen.\n\n",byte*8, pow(2,byte*8));
    //signed
    printf("Signed:\nvon:\t%g\n",pow(2, byte * 8)/-2);
    printf("bis:\t %g\n\n",pow(2, byte * 8)/2-1);
    //unsigned
    printf("Unsigned:\nvon:\t0\n");
    printf("bis:\t%g\n\n", pow(2, byte * 8));
    system("Pause");//Beliebige Taste drücken...
}
/*
fnStundenplan
Stundenplan der E1FI1 (1. Halbjahr)
*/
void fnStundenplan(void) {
    CLEAR();
    printf(GELB("Stundenplan:\n"));
    printf("      |Montag       |Freitag        |\n");
    printf("------|-------------|---------------|\n");
    printf("07:35 |WI       156C|BFK-BWL    317R|\n");
    printf("08:20 |Dan       2A1|Bra          H1|\n");
    printf("------|-------------|---------------|\n");
    printf("08:25 |WI       156C|BFK-BWL    317R|\n");
    printf("09:10 |Dan       2A1|Bra          H1|\n");
    printf("------|-------------|---------------|\n");
    printf("09:15 |GK/D     156C|GK/D       214R|\n");
    printf("10:00 |May        2A|May            |\n");
    printf("------|-------------|---------------|\n");
    printf("10:15 |GK/D     156C|BFK-SAE    317R|\n");
    printf("11:00 |May        2A|Hem            |\n");
    printf("------|-------------|---------------|\n");
    printf("11:05 |BFK-L-A  024E|BFK-SAE    317R|\n");
    printf("11:50 |Ds         2A|Hem            |\n");
    printf("------|-------------|---------------|\n");
    printf("11:55 |BFK-L-A  024E|BFK-SAE    317R|\n");
    printf("12:40 |Ds         2A|Hem            |\n");
    printf("------|-------------|---------------|\n");
    printf("12:40 |             |               |\n");
    printf("13:25 |             |               |\n");
    printf("------|-------------|---------------|\n");
    printf("13:30 |BFK-L-A  024E|BFK-ITS    317R|\n");
    printf("14:15 |Ds         2A|Ths            |\n");
    printf("------|-------------|---------------|\n");
    printf("14:20 |BFK-L-A  024E|BFK-ITS    317R|\n");
    printf("15:05 |Ds         2A|Ths            |\n");
    printf("------|-------------|---------------|\n");
    printf("\n");
    system("Pause");//Beliebige Taste drücken...
}


/*
swap
Tauscht den Zeiger von 2 Variablen.

a:              (int*) Zeiger der Variable a
b:              (int*) Zeiger der Variable b
*/
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
/*
durchschnitt
Berechnet den Durschnitt der Elemente eines Vektors

vektor:         (double)    Vektor mit zu berechnenden Werten
anzahl:         (int)       Anzahl der zu Verwendenden Elemente
returns:        (double)    Durschnittswert
*/
double durchschnitt(double vektor[], int anzahl) {
    int i;
    double summe = 0;
    for (i = 0; i < anzahl; i++) {
        summe += vektor[i];//alle werte aus array addieren
    }
    return summe / anzahl;
}
/*
ja
Ruft die Funktion nein() mit Startwert -1 auf.

n:              (int)       Startwert
*/
void ja(int n) {
    if (n > 0)
    {
        printf("ja\n");
        nein(--n);
    }
}
/*
nein
Ruft die Funktion ja() mit Startwert -1 auf.

n:              (int)       Startwert
*/
void nein(int n) {
    if (n > 0)
    {
        printf("nein\n");
        ja(--n);
    }
}
/*
zweiHoch
Ermittelt die x-te Potenz von 2 mittels direkter Rekursion

zahl:           (int)       Potenz
returns:        (long long int) 2^x
*/
long long int zweiHoch(int zahl) {
    if (zahl < 0) { return 0; } //TODO: minuspotenz
    if (zahl == 0) { return 1;}//beendet die rekursive Schleife, wenn bei 2^0 angekommen.
    return 2 * zweiHoch(zahl - 1);//magic
}