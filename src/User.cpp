#include "User.h"

int User::counter=0;

//Default Constructor
User::User()
{
   name="Unknown";
   email="zx@gmail.com";
   password="*****";
   age=0;
   counter++;
   id=counter;
}

//Parametrize Constructor
User::User(string name,string email,string password,int age)
{
    this->name=name;
    this->email=email;
    this->password=password;
    this->age=age;
    counter++;
    id=counter;
}

//copy Constructor
User::User(const User &obj)
{
    name=obj.name;
    email=obj.email;
    password=obj.password;
    age=obj.age;
    id=obj.id;
}

////////// Name
void User::setName(string n)
{
    name=n;
}

string User::getName() const
{
    return name;
}

//////////Email
void User::setEmail(string e)
{
    email=e;
}

string User::getEmail() const
{
    return email;
}

////////Password

void User::setPassword(string pass)
{
    password=pass;
}

string User::getPassword() const
{
    return password;
}

//////////ID
void User::setId(int i)
{
    id=i;
}
int User::getId() const
{
    return id;
}

//////////Age
void User::setAge(int a)
{
    age=a;
}

int User::getAge() const
{
    return age;
}

///////////Display
void User::display()
{
    cout<<"^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"Password : "<<password<<endl;
    cout<<"*********************"<<endl;
}

/////////////Operator ==
bool User::operator==(const User& obj)
{
    if(name!=obj.name||email!=obj.email||password!=obj.password||age!=obj.age||id!=obj.id)
        return false;

    return true;
}

////////////Operator cin>>
istream &operator>>(istream &input,User &obj)
{
    cout<<"Enter the information of the User :"<<endl;
    cout<<"Name : ";
    input>>obj.name;
    cout<<endl;
    cout<<"Email : ";
    input>>obj.email;
    cout<<endl;
    cout<<"Password : ";
    input>>obj.password;
    cout<<endl;
    cout<<"Age : ";
    input>>obj.age;
    cout<<endl;
    return input;
}

/////////////operator cout<<
ostream &operator<<(ostream &output,User &obj)
{
    cout<<"*** User "<<obj.id<<" Information ***"<<endl;
    cout<<endl;
    output<<"Name : "<<obj.name<<endl;
    output<<"Age : "<<obj.age<<endl;
    output<<"Email : "<<obj.email<<endl;
    output<<"Password : "<<obj.password<<endl;
    output<<"ID : "<<obj.id<<endl;
    return output;
}
User::~User()
{

}
