//
// Created by nizam on 11/24/2021.
//

#include "Instagram.h"

template<class T>
Instagram<T>::Instagram():SocialMediaAccount<T>() {}

template<class T>
Instagram<T>::Instagram(T user):SocialMediaAccount<T>(user) {}

template<class T>
int Instagram<T>::getLikeCount() {
    return likeCount;
}

template<class T>
void Instagram<T>::setLikeCount(int lCount) {
    likeCount=lCount;
}

template<class T>
void Instagram<T>::Like() {
    likeCount++;
}