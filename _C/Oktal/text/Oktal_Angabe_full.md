Oktal
=======================

Schreiben Sie ein C-Programm, das eine Oktalzahl ins Dezimalsystem umrechnet.

## Einleitung

Das Oktalsystem verwendet die Basis 8, mit den 8 Symbolen `0-7` und den Potenzen von 8 als Stellenwerten. Analog zur  "Einer, Zehner, Hunderter, usw " Stelle im Dezimalsystem, spricht man im Oktalsystem von der "Einer, Achter, Vierundsechziger, usw" Stelle.

Der Wert einer Oktalzahl ist also (wie im Dezimalsystem) die Summe von Ziffer $\cdot$ Stellenwert (über alle Stellen), allerdings mit den Potenzen von 8 als Stellenwerte.
 Die Oktalzahl `123` aus dem Beispiel ist also im Dezimalsystem: 

1 \* 8^2 + 2 \* 8^1 + 3 \* 8^0 = 1 \* 64 + 2 \* 8 + 3 \* 1 = 83.


## Aufgabe 

Ihr Programm soll eine im Oktalsystem angegebene Zahl einlesen, diese im Dezimalsystem wieder ausgeben und abschließend die Ziffernsumme der Dezimalzahl ausgeben (ebenfalls im Dezimalsystem).



## Beispiele: 



> ~~~~{}
>Oktalzahl eingeben: \stdin{123}
>dezimal: 83
>Ziffernsumme: 11
> ~~~~


>~~~
>Oktalzahl eingeben: \stdin{777}
>dezimal: 511
>Ziffernsumme: 7
>~~~

## Hinweise: 

- Nehmen sie an, dass höchstens 3-stellige Zahlen eingegeben werden.
- Nehmen Sie weiters an, dass die Eingabe immer nur Ziffern aus dem erlaubten Bereich enthält (0-7).




## Anhang

Method name |  Complexity |  Category |  SLoC
:-|:-:|:-|:-
main |  1 |  simple, without much risk |  12

Table: Oktal Komplexität d. Lösung


Table: Oktal Übersicht Testfälle

Testfall|Beschreibung
---------|------------
001| Bspl 1
002| Bspl 2
003| einstellige Eingabe
004| zweistellige Eingabe
005| dreistellige Eingabe


