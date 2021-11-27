#include <iostream>
#include"SocialMediaAccount.cpp"
#include"Twitter.cpp"
#include "Instagram.cpp"


using namespace std;

struct Profile
{
    int userId;
    string username;
};

ostream & operator<<(ostream &obj, Profile p)
{
    obj<<p.userId<<" "<<p.username;
    return obj;
}

int main()
{
    Profile start={1, "Adam"};
    SocialMediaAccount<string> SS;
    Twitter<string> TS;
    Twitter<Profile> TP;
    Twitter<string> TS2("John");
    Twitter<Profile> Tp2(start);
    Instagram<string> IS;
    Instagram<Profile>IP;
    Instagram<string> IS2("Billy");
    Instagram<Profile>IP2(start);
    IP.setLikeCount(30);
    IP.Like();
    TS2.addFollower("joe");
    TS2.displayFollowers();
    TS.addFollowed("bill");
    TS.displayFollowed();
    IS2.displayFollowed();
    IP2.displayFollowers();

    return 0;
}
