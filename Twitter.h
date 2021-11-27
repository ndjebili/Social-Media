//
// Created by nizam on 11/24/2021.
//

#ifndef NDJEBILI_HW4_Q1_TWITTER_H
#define NDJEBILI_HW4_Q1_TWITTER_H

#include"SocialMediaAccount.h"
template<class T>

class Twitter:public SocialMediaAccount<T> {
public:
    Twitter();
    Twitter(T user);
    void RT();
    int getRetweetCount();
    void setRetweetCount(T tCount);
private:
    int retweetCount;
};


#endif //NDJEBILI_HW4_Q1_TWITTER_H
