#ifndef USER_H
#define USER_H
#include<bits/stdc++.h>
using namespace std;

class User
{
    private:
      string name ;
      string email;
      string password;
       int age;
       int id;
    public:
        static int counter;
        User();
        User(string ,string ,string ,int );
        User(const User &obj);
        void setName(string);
        string getName() const;
        void setEmail(string);
        string getEmail() const;
        void setPassword(string);
        string getPassword() const;
        void setAge(int);
        int getAge() const;
        void setId(int);
        int getId() const;
        void display();
        bool operator==(const User&obj);
        friend istream &operator >>(istream &input, User&obj);
        friend ostream &operator <<(ostream &output,User&obj);
        virtual ~User();



};

#endif // USER_H
