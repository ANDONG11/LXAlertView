//
//  LXAlertView.h
//  LXAlertView
//
//  Created by 刘旭 on 15/10/21.
//  Copyright © 2015年 刘旭. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AlertType) {
    AlertDefault = 1,
    AlertSelect,
    AlertTextField,
    AlertLand,
};

typedef void (^LXAlertViewBlock)(BOOL isConfirm, NSString *text);

@interface LXAlertView : UIView

@property (nonatomic, copy)   LXAlertViewBlock block;
@property (nonatomic, assign) AlertType        type;


- (id)initWithAlertTitle:(NSString *)alertTitle
           WithAlertType:(AlertType)alertType;
- (void)show;

@end