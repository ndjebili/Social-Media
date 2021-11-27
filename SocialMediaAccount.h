//
// Created by nizam on 11/24/2021.
//

#ifndef NDJEBILI_HW4_Q1_SOCIALMEDIAACCOUNT_H
#define NDJEBILI_HW4_Q1_SOCIALMEDIAACCOUNT_H


const int maxFollowed=10;
const int maxFollowers=10;




template<class T>

class SocialMediaAccount{

public:
    SocialMediaAccount();
    SocialMediaAccount(T user);
    void addFollower (T user);
    void addFollowed (T user);
    void displayFollowers();
    void displayFollowed();
    int getFollowerCount();
    int getFollowedCount ();
    bool getPrivacy ();
    T getHandler();
    T setHandler(T user);
    void setFollowerCount (T num);
    void setFollowedCount (T num);
    bool setPrivacy(bool prv);



private:
    T handler;
    int followerCount, followedCount;
    T followers[maxFollowers];
    T followed[maxFollowed];
    bool privacy;

};


#endif //NDJEBILI_HW4_Q1_SOCIALMEDIAACCOUNT_H
