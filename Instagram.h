//
// Created by nizam on 11/24/2021.
//

#ifndef NDJEBILI_HW4_Q1_INSTAGRAM_H
#define NDJEBILI_HW4_Q1_INSTAGRAM_H
#include "SocialMediaAccount.h"
template<class T>

class Instagram:public SocialMediaAccount<T> {

public:
    Instagram();
    Instagram(T user);
    int getLikeCount();
    void setLikeCount(int lCount);
    void Like();

private:
    int likeCount;

};


#endif //NDJEBILI_HW4_Q1_INSTAGRAM_H
