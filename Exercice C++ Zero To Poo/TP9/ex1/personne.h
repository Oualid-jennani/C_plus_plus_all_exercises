#ifndef PERSONNE_H
#define PERSONNE_H


class personne
{
    public:
        personne();
        virtual ~personne();

        personne(char*,char*,int);
        void afichier() const;

    protected:
    private:
        char *nom ;
        char *prenom;
        int age;
};

#endif // PERSONNE_H
