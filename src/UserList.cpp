#include "UserList.h"
#include "User.h"
#include <bits/stdc++.h>
using namespace std;

//Empty Constructor
UserList::UserList()
{
    capacity=0;
    userCount=0;
}


//Parametrize Constructor
UserList::UserList(int capacity)
{
    this->capacity=capacity;
    users=new User[capacity];
    userCount=0;
}

//Add User
void UserList::addUser(User &newUser)
{
        if(userCount<capacity){
            users[userCount]=newUser;
            users[userCount].setId(userCount+1);
            userCount++;
        }
     else
        cout<<"The Array is Full"<<endl;
}

//Search string
User* UserList::searchUser(string name)
{
    for(int i=0;i<userCount;i++)
    {
        if(users[i].getName()==name)
            return &users[i];
    }
    return nullptr;
}

//Search Integer
User* UserList::searchUser(int id)
{
    for(int i=0;i<userCount;i++)
    {
        if(users[i].getId()==id)
            return &users[i];
    }
    return nullptr;
}

//Delete USer By ID
void UserList::deleteUser(int id)
{
    for(int i=0;i<userCount;i++)
    {
        if(users[i].getId()==id){
            while(i<userCount-1){
                users[i]=users[i+1];
                i++;
            }
        userCount--;
        capacity--;
        break;
    }
    }
}

//Delete User By Name
void UserList::deleteUser(string name)
{
    for(int i=0;i<userCount;i++)
    {
        if(users[i].getName()==name)
        {
            while(i<userCount-1)
            {
                users[i]=users[i+1];
                i++;
            }
        }
        userCount--;
        capacity--;
        break;
    }
}

//Operator <<
ostream &operator<<(ostream& output,UserList& obj)
{
    for(int i=0;i<obj.userCount;i++)
        output<<obj.users[i]<<endl;


    return output;
}

//Destructor
UserList::~UserList()
{
    delete []users;
}
