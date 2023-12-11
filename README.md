![Text zu Morse](https://github.com/NathZenh/text-to-morse/assets/46894591/e5f13be1-6cb1-40e2-b09e-2f61b7380958)

# Text to Morse, PRGC-Projekt

## Discription
Nach Eingabe eines Textes in das Terminal wird der Text als Morse-Code über einen Buzzer auf dem PRGC-Board als Geräusch ausgegeben.

## Installation
- Lade die Dateien herunter und füge Sie im "Source" Ordner deines PRGC-Board Projektes hinen. Achte darauf das die Startdatei text-morse.c ist.
- Anschliessend führe das Programm auf deinem PRGC-Board mit JLink aus.

- Verbinde deinen TinyK22 mit der Printbuchse wie im unteren Bild mit Rot angegeben ist.
  PTD0 zu BZ1.

![prgc-board-pinout](https://github.com/NathZenh/text-to-morse/assets/46894591/21d11260-ebc0-4e89-9a80-b19bc551b3a1)

## Documentation
Im Projekt enthalten sind 2 Dateien, die Programme:
- text-morse.c
- morse.h

Wobei die .h Dateien blos eine Header-Datei ist welche benötigt wird um deren Programme fehlerf frei ins Dokument einzubinden.

### text-morse.c
Dies ist das Hauptprogramm des Projektes, es beinhalten die main Funktion und führt dadurch das gesammte Programm aus.
1. Scan Texteingabe über Terminal.
2. Schleife zum finden des Zeichens im Dictonary & herauskopieren des Morse Codes.
3. Ausgeben des Morse Codes als Sound über den Buzzer.

Nach Eingabe eines Textes oder Zeichens wird dies in den Morse Code übersetzt und als Geräusch ausgegeben.
Diese Datei war bereits vorgeben es fehlten lediglich folgende Code Blöcke:

![Carbon source](https://github.com/NathZenh/text-to-morse/assets/46894591/8f9b180e-46d3-45ef-9790-93414eb0374e)

![carbon (3)](https://github.com/NathZenh/text-to-morse/assets/46894591/21771251-c699-472a-a150-84e142c7db30)

### morse.h
Dies Datei war bereits vorgegeben und wurde nicht verändert.

## Lizenz
[MIT](https://choosealicense.com/licenses/mit/)
