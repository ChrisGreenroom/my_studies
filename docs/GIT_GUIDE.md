
# 🧠 Umfassende Übersicht über Git-Befehle

## 🔧 Repository verwalten
- `git init` – Neues Git-Repository erstellen
- `git clone <url>` – Bestehendes Repository klonen
- `git remote -v` – Verknüpfte Remotes anzeigen
- `git remote add origin <url>` – Remote-Verknüpfung hinzufügen

## 📂 Status & Informationen
- `git status` – Zeigt den aktuellen Arbeitszustand
- `git log` – Zeigt Commit-Historie
- `git show` – Zeigt Details zum letzten Commit
- `git diff` – Zeigt Änderungen zwischen Arbeitsverzeichnis und Index
- `git diff --staged` – Zeigt Änderungen im Index
- `git blame <datei>` – Zeigt, wer welche Zeile zuletzt geändert hat

## 📦 Dateien hinzufügen
- `git add <datei>` – Datei zur Staging-Area hinzufügen
- `git add .` – Alle Änderungen zur Staging-Area hinzufügen
- `git reset <datei>` – Datei wieder aus der Staging-Area entfernen

## 📜 Committen
- `git commit -m "Nachricht"` – Commit mit Nachricht erstellen
- `git commit -a -m "Nachricht"` – Änderungen + Commit in einem Schritt
- `git commit --amend` – Letzten Commit bearbeiten (z. B. Nachricht)

## 🔄 Synchronisieren
- `git pull` – Änderungen vom Remote holen & mergen
- `git push` – Änderungen ins Remote-Repo übertragen
- `git push -u origin <branch>` – Erstes Push + Tracking einrichten

## 🌿 Branches
- `git branch` – Lokale Branches anzeigen
- `git branch -r` – Remote-Branches anzeigen
- `git checkout <branch>` – Zu anderem Branch wechseln
- `git checkout -b <branch>` – Neuen Branch erstellen und wechseln
- `git merge <branch>` – Branch in aktuellen mergen
- `git branch -d <branch>` – Lokalen Branch löschen
- `git push origin --delete <branch>` – Remote-Branch löschen

## 🧪 Revertieren & Reset
- `git restore <datei>` – Datei auf letzten Commit zurücksetzen
- `git reset --hard HEAD` – Alle lokalen Änderungen verwerfen
- `git revert <commit>` – Commit rückgängig machen (mit neuem Commit)

## 🧼 Aufräumen
- `git clean -n` – Zeigt unversionierte Dateien an
- `git clean -f` – Löscht unversionierte Dateien
- `git gc` – Führt Garbage Collection durch

## 📁 Stash (zwischenparken)
- `git stash` – Änderungen zwischenspeichern
- `git stash apply` – Änderungen wiederherstellen
- `git stash list` – Zwischengespeicherte Änderungen anzeigen

## 🧪 Tags & Releases
- `git tag` – Zeigt alle Tags
- `git tag <name>` – Neuen Tag setzen
- `git push origin <tag>` – Tag zu Remote pushen

## 🔍 Suche & Vergleich
- `git grep "Suchbegriff"` – Sucht nach Begriff im Repo
- `git diff branch1..branch2` – Unterschiede zwischen Branches anzeigen
- `git log --graph --oneline` – Visualisierte Historie
