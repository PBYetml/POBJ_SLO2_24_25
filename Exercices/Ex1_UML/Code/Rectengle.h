#ifndef Rectengle_h
#define Rectengle_h

#include "FormesGeometriques.h"


class Rectengle : public FormesGeometriques {

 public:

    double CalculerSurface(double Largeur, double Hauteur);

    double CalculerPerimetre(double Largeur, double Hauteur);
};

#endif // Rectengle_h
