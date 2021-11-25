# E1FI1_C-Demo
Erstellt mit Microsoft Visual Studio Community 2022 (64-Bit)\
Version 17.0.1

![image](https://user-images.githubusercontent.com/93385909/143472425-50b493b0-c5c2-4eaa-8534-d1e2c4dc4ccf.png)

## Schleifen
#### While
Führt eine While-Schleife aus, solange die abgefragte Zahl kleiner gleich 0 ist.\
Ist die Zahl größer Null, wird die Schleife beendet.
#### For
Führt eine For-Schleife für eine variable Anzahl Wiederholungen mit einem zuvor festgelegten Startwert aus.
#### Do While
Führt eine Do-While-Schleife aus, solange die abgefragte Zahl kleiner gleich 0 ist.\
Ist die Zahl größer Null, wird die Schleife beendet.
## Sterne
#### Einzeilig
Gibt eine variable Anzahl an Sternen einzeilig aus.
#### Mehrzeilig
Gibt eine variable Anzahl an Sternen pro Zeile aus.\
Die Anzahl der Zeilen kann gewählt werden.
## Zinsberechnung
Berrechnet die Anlagedauer, um aus einer angegebenen Startsumme mit einem angegebenen Zinssatz eine gewünschte Endsumme zu erreichen.\
Die Berechnung findet mittels einer For-Schleife statt.
<pre><code>for (jahre = 0, guthaben = anfangssumme; guthaben < endsumme; jahre++) {
  guthaben += guthaben / 100 * zinssatz;
}</code></pre>
![image](https://user-images.githubusercontent.com/93385909/143417804-dcd8b197-bcdc-40ab-9172-f48455a6aec9.png)
## Gauß
Addiert alle Zahlen von 1 bis gewünschtem Endwert.\
Die Berechnung findet mittels einer Formel statt.
>x = (n * (n + 1)) / 2

Alternativ könnte das Ergebnis mit einer For-Schleife ermittelt werden.
<pre><code>for (i = 1, ergebnis = 0; i <= ende; i++) {
  ergebnis += i;
}</code></pre>
## Lottozahlen
Gibt die Zahlen von 1 bis 49 aus. (7-Zeilig)

![image](https://user-images.githubusercontent.com/93385909/143417967-18194d83-e49b-4d49-94a0-22c86b160dec.png)
## Rekursion
Rekursive Funktionen sind sich selbst aufrufende Funktionen.
#### direkte Rekursion (2^x)
Berechnet die x-te potenz von 2.\
Maximalwert für x ist 62, da ansonsten das Ergebnis nicht darstellbar ist (long long int)
#### indirekte Rekursion (ja/nein)
Führt die Funktion ja() oder nein() mit einem beliebigen Startwert aus.\
ja() und nein() rufen sich gegenseitig auf.
## Zeiger
Tauscht den Zeiger von 2 Variablen.
## Notendurchschnitt
Berechnet den Notendurchschnitt einer beliebigen Anzahl an Noten (max. 100).
## Datentypen
Übersicht der in C verwendeten Datentypen.
## Bit/Byte
Rechnet Byte in Bit um und gibt weitere Informationen aus.
## Stundenplan
Stundenplan der E1FI1 (1. Halbjahr)
## Hilfe/GitHub
Öffnet ein Browserfenster mit folgender Adresse:
>https://github.com/JohannesRW/E1FI1_C-Demo
