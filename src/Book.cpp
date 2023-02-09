#include "Book.h"
#include "User.h"
#include <iostream>
using namespace std;

int Book::counterr=0;

//empty constructor
Book::Book()
{
    title="Unknown";
    isbn="0";
    category="Unknown";
    averageRating=0.0;
    counterr++;
    id=counterr;
    User auther;
    numRate=0;
    sumRates=0.0;
}

//Parametrize Constructor
Book::Book(string title, string isbn ,string category)
{
    this->title=title;
    this->isbn=isbn;
    this->category=category;
    counterr++;
    id=counterr;
    User auther;
    averageRating=0.0;
    numRate=0;
    sumRates=0.0;
}

//Copy Constructor
Book::Book(Book &obj)
{
    title=obj.title;
    isbn=obj.isbn;
    category=obj.category;
    averageRating=obj.averageRating;
    auther=obj.auther;
    id=obj.id;
    numRate=obj.numRate;
    sumRates=obj.sumRates;
}

//Title
void Book::setTitle(string t)
{
    title=t;
}
string Book::getTitle() const
{
    return title;
}

//Isbn
void Book::setIsbn(string is)
{
    isbn=is;
}
string Book::getIsbn() const
{
    return isbn;
}

//Category
void Book::setCategory(string cate)
{
    category=cate;
}
string Book::getCategory() const
{
    return category;
}

//AverageRating
void Book::setAverageRating(double avg)
{
    averageRating=avg;
}
double Book::getAverageRating() const
{
    return averageRating;
}

//ID
void Book::setId(int i)
{
    id=i;
}
int Book::getId() const
{
    return id;
}

//Author
void Book::setAuther(User &obj)
{
    auther=obj;
}

User Book::getAuther() const
{
    return auther;
}

//NumRate
void Book::setNumRate(int num)
{
    numRate=num;
}
int Book::getNumRate() const
{
    return numRate;
}

//SumRates
void Book::setSumRates(double sum)
{
    sumRates=sum;
}
double Book::getSumRates() const
{
    return sumRates;
}

//RateBook
void Book::rateBook(double rating)
{
    numRate++;
    sumRates+=rating;
    averageRating=sumRates/numRate;
}

//Operator >>
istream &operator>>(istream&input,Book&obj)
{
    cout<<"Enter the Information of the Book"<<endl;
    cout<<"Title : ";
    input>>obj.title;
    cout<<endl;
    cout<<"ISBN : ";
    input>>obj.isbn;
    cout<<endl;
    cout<<"Category : ";
    input>>obj.category;
    cout<<endl;
    return input;
}

//operator <<
ostream &operator<<(ostream&output,Book&obj)
{
    cout<<"*** Book "<<obj.id<<" Information ***"<<endl;
    output<<"Title : "<<obj.title<<endl;
    output<<"ISBN : "<<obj.isbn<<endl;
    output<<"Category : "<<obj.category<<endl;
    output<<"ID : "<<obj.id<<endl;
    output<<"Avg Rating : "<<obj.averageRating<<endl;
    /*if(obj.auther.getName!="Unknown")
        output<<obj.auther<<endl;*****/
    output<<obj.auther<<endl;
    return output;
}

//operator ==
bool Book::operator==(Book&obj)
{
    return(title==obj.title&&isbn==obj.isbn&&category==obj.category&&id==obj.id&&auther==obj.auther&&averageRating==obj.averageRating);
}
Book::~Book()
{

}

