SimpleBMI
=======================

Schreiben Sie ein C-Programm, das den Body-Mass-Index (BMI) berechnet
sowie eine Bewertung des errechneten BMI ausgibt.

## Einleitung

Der BMI ist eine (positive) Maßzahl für die Bewertung des Körpergewichts
(*m*) eines Menschen in Relation zu seiner Körpergröße (*l*) und errechnet
sich als Gewicht in Kilogramm durch Quadrat der Körpergröße in Metern:

*BMI = m / l^{2}*

In unserem Beispiel soll die Berechnung des BMI nur durchgeführt werden
für Körpergewichte ab 40kg bzw. Körpergrößen ab 160cm.



  **BMI  *[kg/m^{2}]***  | **Kategorien-Bezeichnung** | **Kategorien-Nummer**   
  ---------------------- | -------------------------  | ----------------------- 
  < 16,00                | stark untergewichtig       | 10                      
  16,00–16,99            | mäßig untergewichtig       | 11                      
  17,00–18,49            | leicht untergewichtig      | 12                      
  18,50–24,99            | normalgewichtig            | 20                      
  25,00–29,99            | präadipös                  | 30                      
  30,00–34,99            | adipös Grad I              | 40                      
  35,00–39,99            | adipös Grad II             | 41                      
  >= 40,00               | adipös Grad III            | 42                      

Table: Adipositas-Kategorien

## Aufgabe 

Ihr Programm liest Körpergewicht (in kg) und Körpergrösse  (in m) ein und

- berechnet den BMI
- berechnet die BMI Kategorie
- berechnet die Bewertung 

und gibt all das an der Konsole aus (Formatierung siehe Beispiel).

Bei ungültiger Eingabe wird die Eingabe *nicht* wiederholt (Siehe Beispiel 2).


#### Beispiele: 
(Text in rot = Benutzereingabe)

> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{#BMI_Bspl1}
> Koerpergewicht [kg]: \stdin{121.5}
> Koerpergroesse [m]: \stdin{1.96} 
> m=121.50kg l=1.96m -> BMI=31.63 (Kategorie 40 "adipoes Grad I")
> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{#BMI::Bspl2}
> Koerpergewicht [kg]: \stdin{25}
> Koerpergroesse [m]: \stdin{1.16} 
> m=25.00kg l=1.16m -> BMI=-1.00 (Kategorie -1 "ungueltig")
> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




## Anhang

Method name |  Complexity |  Category |  SLoC
:-|:-:|:-|:-
main |  23 |  complex, high risk |  88

Table: SimpleBMI Komplexität d. Lösung


Table: SimpleBMI Übersicht Testfälle

Testfall|Beschreibung
---------|------------
001| adipoes Grad I
002| adipoes Grad III
003| adipoes Grad II
004| adipoes Grad I
005| praeadipoes
006| normalgewichtig
007| leicht untergewichtig
008| stark untergewichtig
009| maessig untergewichtig
010| ungueltiges Gewicht
011| ungueltige Groesse
012| ungueltiges Gewicht
013| stark untergewichtig
014| ungueltige Groesse
015| normalgewichtig
016| stark untergewichtig


