#ifndef BOOKLIST_H
#define BOOKLIST_H
#include <bits/stdc++.h>
#include "Book.h"
using namespace std;


class BookList
{
    private:
        Book* books;
        int capacity;
        int bookscount;
    public:
        BookList();
        BookList(int);
        void addBook(Book&);
        Book* searchBook(string);
        Book* searchBook(int);
        void deleteBook(string);
        void deleteBook(int);
        Book getHighestBookRate();
        void getUserOfTheBook(User &);
        Book &operator[](int);
        friend ostream &operator<<(ostream&,BookList&);

        virtual ~BookList();

};

#endif // BOOKLIST_H
