//
//  ViewController.h
//  CameraDemo
//
//  Created by peng xin on 2017/6/5.
//  Copyright © 2017年 creator. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "includes.h"
#import <opencv2/imgcodecs/ios.h>
#import <opencv2/videoio/cap_ios.h>

@interface ViewController : UIViewController<CvVideoCameraDelegate>
{
    CvVideoCamera* videoCamera;
}

@property (nonatomic, strong) CvVideoCamera* videoCamera;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;

@end

