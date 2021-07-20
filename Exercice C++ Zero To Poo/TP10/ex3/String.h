#ifndef CHAINE_H
#define CHAINE_H


class String
{
    public:
        String();
        virtual ~String();

        String(char*);

        char *toString();
        int longueur();
        void add_char(int,char);
        bool exist(char);
        void inverser();
        void remove_char(int);





    protected:
    private:
        char *ch;

};
#endif // CHAINE_H
