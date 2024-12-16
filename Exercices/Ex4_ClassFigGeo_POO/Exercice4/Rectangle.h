#ifndef Rectangle_h
#define Rectangle_h

#include "FormesGeometriques.h"


class Rectangle : public FormesGeometriques {

 public:

     void CalculerSurface(double largeur, double hauteur);

     void CalculerPerimetre(double largeur, double hauteur);
};

#endif // Rectangle_h