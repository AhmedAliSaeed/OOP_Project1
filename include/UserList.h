#ifndef USERLIST_H
#define USERLIST_H
#include<bits/stdc++.h>
#include "User.h"
using namespace std;

class UserList
{
    private:
        User *users;
        int capacity;
        int userCount;
    public:
        UserList();
        UserList(int);
        void addUser(User &);
        User* searchUser(string);
        User* searchUser(int);
        void deleteUser(int);
        void deleteUser(string);
        friend ostream &operator<<(ostream& , UserList&);
        virtual ~UserList();


};

#endif // USERLIST_H
