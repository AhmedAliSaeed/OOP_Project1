#include "BookList.h"
#include <bits/stdc++.h>
#include "Book.h"
using namespace std;

//Empty Constructor
BookList::BookList()
{
    capacity=0;
    bookscount=0;
}


//Parametrize Constructor
BookList::BookList(int capacity)
{
    this->capacity=capacity;
    books=new Book[capacity];
    bookscount=0;
}

//Add Book
void BookList::addBook(Book & newBook)
{
    if(bookscount<capacity){
        books[bookscount]=newBook;
        books[bookscount].setId(bookscount+1);
    bookscount++;
    }
    else
        cout<<"The Array's Book is Full"<<endl;
}

//Search By Name
Book* BookList::searchBook(string name)
{
    for(int i=0;i<bookscount;i++)
    {
        if(books[i].getTitle()==name)
            return &books[i];
    }
    return nullptr;
}

//search By ID
Book* BookList::searchBook(int id)
{
    for(int i=0;i<bookscount;i++)
    {
        if(books[i].getId()==id)
            return &books[i];
    }
    return nullptr;
}

//Delete
void BookList::deleteBook(int id)
{
    for(int i=0;i<bookscount;i++)
    {
        if(books[i].getId()==id)
        {
            while(i<bookscount-1){
                books[i]=books[i+1];
                books[i].setId(i+1);
                i++;
        }
        }
        capacity--;
        bookscount--;
        break;
    }
}

//Operator <<
ostream &operator<<(ostream&output, BookList&obj)
{
    for(int i=0;i<obj.bookscount;i++)
        output<<obj.books[i]<<endl;

    return output;
}

//Highest Rate
Book BookList::getHighestBookRate()
{
    double MaxRate=-1.0;
    int index=0;
    for(int i=0;i<bookscount;i++)
    {
        if(books[i].getAverageRating()>MaxRate){
            MaxRate=books[i].getAverageRating();
            index=i;
        }
        return books[index];
    }
}

//User Of The Book
void BookList::getUserOfTheBook(User &Owner)
{
   // bool found=false;
    for(int i=0;i<bookscount;i++)
    {
        if(books[i].getAuther()==Owner)
            cout<<books[i]<<endl;;
    }
}

//Array Of Books
Book &BookList::operator[](int position)
{
    if(position<0||position>=bookscount){
        cout<<"ERROE POSITION"<<endl;
            exit(0);
    }

    return books[position];
}

// Destructor
BookList::~BookList()
{
    delete []books;
}
