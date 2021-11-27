//
// Created by nizam on 11/24/2021.
//

#include "Twitter.h"

template<class T>
Twitter<T>::Twitter():SocialMediaAccount<T>(){}

template<class T>
Twitter<T>::Twitter(T user):SocialMediaAccount<T>(user){}

template<class T>
void Twitter<T>::RT() {
    retweetCount++;
}

template<class T>
int Twitter<T>::getRetweetCount() {
    return retweetCount;
}

template<class T>
void Twitter<T>::setRetweetCount(T tCount) {
    retweetCount=tCount;
}