#include <bits/stdc++.h>
#include "User.h"
#include "Book.h"
using namespace std;

int main()
{
    User u1,u2,u3;
    cin>>u1>>u2>>u3;
    cout<<"/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/"<<endl;
    Book b1,b2,b3;
    cin>>b1>>b2>>b3;
    cout<<"/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/"<<endl;
    b1.setAuther(u1);
    b2.rateBook(2);
    b2.rateBook(3);
    b3.setAuther(u3);
    cout<<b1<<b2<<b3;
    return 0;
}
