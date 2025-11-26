#ifndef Rectangle_h
#define Rectangle_h

#include "FormesGeometriques.h"


class Rectangle : public FormesGeometriques {

 public:

    double CalculerSurface(double Largeur, double Hauteur);

    double CalculerPerimetre(double Largeur, double Hauteur);
};

#endif // Rectangle_h
