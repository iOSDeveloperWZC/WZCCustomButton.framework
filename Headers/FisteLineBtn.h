//
//  FisteLineBtn.h
//  HDAPP
//
//  Created by ataw on 16/11/3.
//  Copyright © 2016年 王宗成. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol eventResProtrol <NSObject>

-(void)eventRes:(NSInteger)num;

@end
#define Font(a) [UIFont systemFontOfSize:(a)]
#define RGB(r,g,b) [UIColor colorWithRed:((CGFloat)r)/255 green:((CGFloat)g)/255 blue:((CGFloat)b)/255 alpha:1]
@interface FisteLineBtn : UIView

/**
 *数字
 */
-(instancetype)initWithType1Frame:(CGRect)frame andTitle:(NSString *)title titleColor:(UIColor *)color titleFont:(UIFont *)font andNum:(NSNumber *)number numColor:(UIColor *)nColor numFont:(UIFont *)nFont;
/**
 *图片
 */
-(instancetype)initWithType2Frame:(CGRect)frame andTitle:(NSString *)title titleColor:(UIColor *)color titleFont:(UIFont *)font andImageName:(NSString *)imageName;

/**
 *数字＋图片
 */
-(instancetype)initWithType3Frame:(CGRect)frame
                         andTitle:(NSString *)title
                       titleColor:(UIColor *)color
                        titleFont:(UIFont *)font
                           andNum:(NSNumber *)number
                         numColor:(UIColor *)nColor
                          numFont:(UIFont *)nFont
               numBackGroundColor:(UIColor *)bgColor
                     andImageName:(NSString *)imageName;
//更新显示数字
-(void)updateLableNum:(NSNumber *)num;

//添加事件
- (void)addTarget:(id)target action:(SEL)action;
@end
