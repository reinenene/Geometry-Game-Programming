# Projet de Géométrie 2D – Game Programming

Ce projet a été réalisé dans le cadre du cours de **Game Programming**, afin d’explorer la manipulation de **points** et de **vecteurs 2D** en langage **C++**.  
Il permet de comprendre les transformations géométriques de base telles que la **translation**, la **rotation** et l’**homothétie**, en appliquant les notions de struct, de fonctions et de modularité du code.

---

## Objectifs du projet

- Implémenter des structures pour représenter des **points** et des **vecteurs**.  
- Appliquer différentes transformations géométriques sur ces éléments.  
- Travailler sur la **modularisation** du code avec plusieurs fichiers `.h` et `.cpp`.  
- Approfondir la pratique de la **programmation orientée calculs géométriques**.

---

## Structure du projet
main.cpp
geometry/
├── point.h
├── point.cpp
├── vector.h
├── vector.cpp
└── utils.h

## Fonctionnalités principales

### Points (`point.h` / `point.cpp`)
- Création d’un point : `MakeP2f(x, y)`
- Translation : `Translate(p, dx, dy)` ou `Translate(p, v)`
- Homothétie (mise à l’échelle) : `Scale(p, sx, sy)`
- Rotation : `Rotate(p, angleDegree)`
- Conversion en texte : `ToString(p)`

### Vecteurs (`vector.h` / `vector.cpp`)
- Création d’un vecteur : `MakeV2f(x, y)` ou `MakeV2f(a, b)`
- Addition / Soustraction : `Add(a, b)` / `Sub(a, b)`
- Produit scalaire : `Dot(a, b)`
- Normalisation : `Normalize(v)`
- Longueur : `Length(v)`
- Interpolation linéaire : `Lerp(a, b, t)`
- Déterminant : `Determinant(a, b)`

---

## 💻 Exemple d’utilisation

```cpp
#include "geometry/point.h"
#include "geometry/vector.h"
#include "geometry/utils.h"

int main() {
    Point2f p = MakeP2f(2.0f, 3.0f);
    Vector2f v = MakeV2f(1.0f, -1.0f);

    Point2f p2 = Translate(p, v);
    Print("Point après translation:", ToString(p2));

    Point2f p3 = Scale(p2, 2.0f, 2.0f);
    Print("Point après homothétie:", ToString(p3));

    return 0;
}
