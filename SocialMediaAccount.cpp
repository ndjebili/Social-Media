//
// Created by nizam on 11/24/2021.
//
#include "iostream"
#include <d2d1helper.h>
#include <commctrl.h>
#include "SocialMediaAccount.h"

using std::cout;
using std::endl;

template<class T>
SocialMediaAccount<T>::SocialMediaAccount(): followerCount(0), followedCount(0), privacy(false){}


template<class T>
SocialMediaAccount<T>::SocialMediaAccount(T user):handler(user), followerCount(0), followedCount(0), privacy(false){}


template<class T>
int SocialMediaAccount<T>::getFollowedCount (){
return followedCount;
}

template<class T>
int SocialMediaAccount<T>::getFollowerCount(){
return followerCount;
}


template<class T>
void SocialMediaAccount<T>::setFollowedCount(T num) {
followedCount=num;
}


template<class T>
void SocialMediaAccount<T>::setFollowerCount(T num) {
followerCount=num;
}

template<class T>
bool SocialMediaAccount<T>::getPrivacy() {
    return privacy;

}
template<class T>
bool SocialMediaAccount<T>::setPrivacy(T prv) {
    privacy = prv;
}

template<class T>
void SocialMediaAccount<T>::addFollower(T user) {
    if (followerCount < maxFollowers) {
        followed[followedCount] = user;
        followerCount++;
    }

}


template<class T>
void SocialMediaAccount<T>::addFollowed (T user) {
    if (followedCount < maxFollowed) {
        followed[followedCount] = user;
        followedCount++;

    }
}

template<class T>
T SocialMediaAccount<T>::getHandler() {
    return handler;
}


template<class T>
T SocialMediaAccount<T>::setHandler(T user) {
    handler = user;
}

template<class T>
void SocialMediaAccount<T>::displayFollowers(){
    if(privacy == false){
        for(int i=0;i<=followerCount;i++){
            cout<<followers[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Account is private. You can't view this"<<endl;
    }
}


template<class T>
void SocialMediaAccount<T>::displayFollowed(){
    if(privacy == false){
        for(int i=0;i<=followedCount;i++){
            cout<<followed[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Account is private. You can't view this"<<endl;
    }
}
