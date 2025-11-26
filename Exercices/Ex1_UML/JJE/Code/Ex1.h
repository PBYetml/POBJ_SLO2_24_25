#ifndef Ex1_h
#define Ex1_h

class FormesGeometriques;

class Ex1 {

 public:

    void SaisirParametres(int CodeForme);

    int main();

    void ExecuterLesCalculs(int CodeForme);

    void AfficherResultats(int CodeForme);

    int ChoisirForme();

 public:
    int CodeFormeChoisie;

 public:

    /**
     * @element-type FormesGeometriques
     */
    FormesGeometriques *myFormesGeometriques;
};

#endif // Ex1_h
