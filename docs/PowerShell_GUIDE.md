
# ⚙️ PowerShell-Befehle – Übersicht

## 📁 Navigation und Verzeichnisse
- `cd <Pfad>` – Wechselt in ein anderes Verzeichnis
- `mkdir <Ordnername>` – Erstellt einen neuen Ordner
- `dir` – Listet Inhalte des aktuellen Verzeichnisses auf
- `dir -Force` – Zeigt auch versteckte Dateien/Ordner

## 📄 Dateien erstellen und bearbeiten
- `New-Item <Name> -ItemType File` – Erstellt eine neue Datei
- `Remove-Item <Pfad>` – Löscht Datei oder Ordner
- `Remove-Item -Recurse -Force <Pfad>` – Löscht inkl. Unterordnern (vorsichtig!)
- `Move-Item <Quelle> <Ziel>` – Verschiebt Datei/Ordner
- `Rename-Item <Alt> <Neu>` – Bennennt Datei oder Ordner um

## 📝 Dateiinhalte anzeigen und ändern
- `Get-Content <Datei>` – Zeigt Dateiinhalt zeilenweise
- `Set-Content <Datei>` – Überschreibt den Dateiinhalt
- `Add-Content <Datei>` – Hängt Text ans Ende der Datei an
- `cat <Datei>` – Alias für `Get-Content`
- `type <Datei>` – Alternative Anzeige für Dateiinhalt

## 🔍 Informationen & Prüfung
- `Test-Path <Pfad>` – Prüft, ob Pfad/Datei existiert
- `Get-Help <Befehl>` – Zeigt Hilfe zu einem Befehl
- `Get-Command *<Suchwort>*` – Sucht nach verfügbaren Cmdlets

## 🧪 Beispiel: Mehrzeiligen Text in Datei schreiben
```powershell
@'
Erste Zeile
Zweite Zeile
'@ | Set-Content datei.txt
```

## 💡 Weitere Tipps
- `code .` – Öffnet aktuelles Verzeichnis in Visual Studio Code
- `cls` – Terminal leeren
- `history` – Letzte Befehle anzeigen
