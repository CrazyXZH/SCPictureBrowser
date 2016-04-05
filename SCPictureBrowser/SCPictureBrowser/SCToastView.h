//
//  SCToastView.h
//  SCPictureBrowser
//
//  Created by sichenwang on 16/4/5.
//  Copyright © 2016年 sichenwang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SCToastView : UIView

+ (void)showInView:(nonnull UIView *)view text:(nonnull NSString *)text;

@end

NS_ASSUME_NONNULL_END
