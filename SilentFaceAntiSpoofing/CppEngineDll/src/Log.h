//
// Created by yuanhao on 20-6-10.
//

#ifndef LIVEBODYEXAMPLE_ANDROID_LOG_H
#define LIVEBODYEXAMPLE_ANDROID_LOG_H

//#include <android/log.h> // not valid for windows

#define LOG_TAG     "Engine"

#define LOG_INFO(msg)       Std::cout<< LOG_TAG <<" [Info]: " << msg << std::endl
#define LOG_DEBUG(msg)      Std::cout<< LOG_TAG <<" [Debug]: " << msg << std::endl
#define LOG_WARN(msg)       Std::cout<< LOG_TAG <<" [Warn]: " << msg << std::endl
#define LOG_ERR(msg)        Std::cout<< LOG_TAG <<" [Error]: " << msg << std::endl

#endif //LIVEBODYEXAMPLE_ANDROID_LOG_H
