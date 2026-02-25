```markdown
# TP10 – Algorithmes : QuickSort & Binary Search

Ce projet a été réalisé dans le cadre du TP10 d’algorithmique.  
Il implémente deux algorithmes fondamentaux :

- **QuickSort** (tri rapide)
- **Binary Search** (recherche dichotomique)

Le projet inclut :
- une démonstration complète dans `main.c`
- une bibliothèque `algorithms` contenant les fonctions
- des **tests unitaires** automatisés via CTest
- un système de compilation propre avec **CMake**
- des captures d’écran de la compilation et de l’exécution

---

## 📁 Structure du projet

```
TP10_Algorithmes/
│
├── src/
│   ├── quicksort.c
│   ├── quicksort.h
│   ├── binary_search.c
│   ├── binary_search.h
│   └── main.c
│
├── tests/
│   ├── test_quicksort.c
│   └── test_binary_search.c
│
├── captures/
│   └── compilation du code TP10.jpeg
│
├── CMakeLists.txt
└── .gitignore
```

---

## ⚙️ Compilation

Depuis la racine du projet :

```bash
mkdir build
cd build
cmake ..
make
```



**Exécution de la démonstration**

```bash
./tp10
```

Affichage attendu :

```
=== TP10 : Démonstration QuickSort et Binary Search ===

Tableau initial : 34 7 23 32 5 62
Tableau trié : 5 7 23 32 34 62
Élément 23 trouvé à l'indice 2
Élément 99 non trouvé
```



**Tests unitaires**

Les tests sont écrits en C pur avec `assert`.

Pour les exécuter :

```bash
ctest --output-on-failure
```

Exemple de résultat :

```
100% tests passed, 0 tests failed out of 2
```



**Captures d’écran**

Une capture d’écran de la compilation et des tests est disponible dans :

```
captures/compilation du code TP10.jpeg
```



**Conclusion**

Ce TP met en pratique :

- la manipulation de tableaux
- l’implémentation d’algorithmes classiques
- la récursivité
- la recherche dichotomique
- la compilation modulaire avec CMake
- les tests unitaires automatisés

Le projet est propre, structuré et entièrement reproductible.

```
