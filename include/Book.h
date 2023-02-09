#ifndef BOOK_H
#define BOOK_H
#include<bits/stdc++.h>
#include"User.h"
using namespace std;


class Book
{
    private:
        string title;
        string isbn;
        string category;
        int id;
        int numRate;
        double sumRates;
        double averageRating;
        User auther;
        bool hasAuther;
    public:
        static int counterr;
        Book();
        Book(string ,string ,string );
        Book(Book&obj);
        void setTitle(string);
        string getTitle() const;
        void setIsbn(string);
        string getIsbn() const;
        void setCategory(string);
        string getCategory() const;
        void setAverageRating(double);
        double getAverageRating()const;
        void setId(int);
        int getId() const;
        void setAuther(User&obj);
        User getAuther() const;
        void rateBook(double);
        void setNumRate(int);
        int getNumRate() const;
        void setSumRates(double);
        double getSumRates() const;
        bool operator==(Book&);
        friend istream &operator>>(istream &,Book &);
        friend ostream &operator<<(ostream &,Book &);
        virtual ~Book();


};

#endif // BOOK_H
