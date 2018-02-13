//
//  ImageCaptcha.h
//  EmotionCaptcha
//
//  Created by Daniel Strebinger on 13.02.18.
//  Copyright © 2018 Daniel Strebinger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CaptchaProtocol.h"

@interface ImageCaptcha : UIView  <CaptchaProtocol, UICollectionViewDataSource, UICollectionViewDelegate>

@end
