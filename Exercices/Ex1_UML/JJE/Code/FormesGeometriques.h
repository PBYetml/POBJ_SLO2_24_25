#ifndef FormesGeometriques_h
#define FormesGeometriques_h


class FormesGeometriques {

 public:

    virtual double CalculerSurface(int double x1, double x2);

    virtual double CalculerPerimetre(int double x1, double x2);

    double GetSurface();

    double GetPerimetre();

 public:
    double Surface;
    double Perimetre;

};

#endif // FormesGeometriques_h
