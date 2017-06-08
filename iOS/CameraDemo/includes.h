//
//  includes.h
//  CameraDemo
//
//  Created by peng xin on 2017/6/5.
//  Copyright © 2017年 creator. All rights reserved.
//

#ifndef includes_h
#define includes_h

#ifndef __IPHONE_4_0
#warning "This project uses features only available in iOS SDK 4.0 and later."
#endif

#import <Availability.h>

#ifdef __cplusplus
#import <opencv2/opencv.hpp>
#endif

#ifdef __OBJC__
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#endif

#endif /* includes_h */
