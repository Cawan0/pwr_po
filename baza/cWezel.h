#ifndef CWEZEL_H
#define CWEZEL_H


class cWezel
{
    public:
        cWezel(int liczba);
        virtual ~cWezel();
        cWezel* nastepnyElement;
        int liczba;

    private:
};

#endif // CWEZEL_H
