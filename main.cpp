#include <iostream>

using namespace std;
class Register
{
public:
    string user, pass;
};

class Login
{
public:
    string inuser, inpass;

};

int main()
{
    Register newuser;
    cout<<"WELCOME BACK, PLEASE REGISTER: "<<endl;
    cout<<"MAKE A NEW USERNAME: ";
    cin>>newuser.user;
    cout<<"\nASSIGN A PASSWORD: ";
    cin>>newuser.pass;
    cout<<"\nSign up done! Please login. "<<endl;

    Login newlogin;
    cout<<"\nYour Username: ";
    cin>>newlogin.inuser;
    cout<<"\nYour Password: ";
    cin>>newlogin.inpass;

    if(newlogin.inuser==newuser.user && newlogin.inpass==newuser.pass)
        cout<<"\nSuccesfully logged in as "<<newlogin.inuser<<endl;
    else
        cout<<"\nUsername or password incorrect "<<endl;

}
