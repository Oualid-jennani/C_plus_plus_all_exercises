#ifndef POINT_H
#define POINT_H
#include<iostream>
using namespace std;

class point
{
    public:
        point();
        virtual ~point();
        point(int,int);

        point& operator+(point &);
        bool operator==(const point&);
        friend ostream& operator<<(ostream &str, point&);
        friend istream& operator>>(istream &, point&);


        point &operator*(float );
        friend point&operator*(float, point&);




    protected:

    private:
        float x;
        float y;
};

#endif // POINT_H
