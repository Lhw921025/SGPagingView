//
//  如遇到问题或有更好方案，请通过以下方式进行联系
//      QQ群：429899752
//      Email：kingsic@126.com
//      GitHub：https://github.com/kingsic/SGPagingView
//
//  SGPageTitleViewConfigure.h
//  SGPagingViewExample
//
//  Created by kingsic on 2017/10/16.
//  Copyright © 2017年 kingsic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    /// 下划线样式
    SGIndicatorStyleDefault,
    /// 遮盖样式
    SGIndicatorStyleCover,
    /// 固定样式
    SGIndicatorStyleFixed,
    /// 动态样式（仅在 SGIndicatorScrollStyleDefault 样式下支持）
    SGIndicatorStyleDynamic
} SGIndicatorStyle;

typedef enum : NSUInteger {
    /// 指示器位置跟随内容滚动而改变
    SGIndicatorScrollStyleDefault,
    /// 内容滚动一半时指示器位置改变
    SGIndicatorScrollStyleHalf,
    /// 内容滚动结束时指示器位置改变
    SGIndicatorScrollStyleEnd
} SGIndicatorScrollStyle;

@interface SGPageTitleViewConfigure : NSObject
/** 类方法创建 */
+ (instancetype)pageTitleViewConfigure;

#pragma mark - - SGPageTitleView 属性
/** SGPageTitleView 是否需要弹性效果，默认为 YES */
@property (nonatomic, assign) BOOL needBounces;
/** 是否显示底部分割线，默认为 YES */
@property (nonatomic, assign) BOOL showBottomSeparator;
/* SGPageTitleView 底部分割线颜色，默认为 lightGrayColor */
@property (nonatomic, strong) UIColor *bottomSeparatorColor;

#pragma mark - - 标题属性
/** 标题文字字号大小，默认 15 号字体 */
@property (nonatomic, strong) UIFont *titleFont;
/** 标题文字选中字号大小，默认 15 号字体。
  * 一旦开启此属性，SGPageTitleView.h 里面的 isOpenTitleTextZoom 属性将不起作用，
  * SGPageTitleView.m 内部已做处理 */
@property (nonatomic, strong) UIFont *titleSelectedFont;
/** 普通状态下标题按钮文字的颜色，默认为黑色 */
@property (nonatomic, strong) UIColor *titleColor;
/** 选中状态下标题按钮文字的颜色，默认为红色 */
@property (nonatomic, strong) UIColor *titleSelectedColor;
/** 是否让标题按钮文字具有渐变效果，默认为 NO */
@property (nonatomic, assign) BOOL titleGradientEffect;
/** 是否让标题按钮文字具有缩放效果，默认为 NO */
@property (nonatomic, assign) BOOL titleTextZoom;
/** 标题按钮文字缩放比，默认为 0.1f，取值范围 0 ～ 0.3f */
@property (nonatomic, assign) CGFloat titleTextScaling;
/** 按钮之间的间距，默认为 20.0f */
@property (nonatomic, assign) CGFloat spacingBetweenButtons;

#pragma mark - - 指示器属性
/** 是否显示指示器，默认为 YES */
@property (nonatomic, assign) BOOL showIndicator;
/** 指示器颜色，默认为红色 */
@property (nonatomic, strong) UIColor *indicatorColor;
/** 指示器高度，默认为 2.0f */
@property (nonatomic, assign) CGFloat indicatorHeight;
/** 指示器的额外宽度，介于按钮文字宽度与按钮宽度之间 */
@property (nonatomic, assign) CGFloat indicatorAdditionalWidth;
/** 指示器动画时间，默认为 0.1f，取值范围 0 ～ 0.3f */
@property (nonatomic, assign) CGFloat indicatorAnimationTime;
/** 指示器样式，默认为 SGIndicatorStyleDefault */
@property (nonatomic, assign) SGIndicatorStyle indicatorStyle;
/** 指示器圆角大小，默认为 0f */
@property (nonatomic, assign) CGFloat indicatorCornerRadius;
/** 指示器遮盖样式外的其他样式下指示器与底部之间的距离，默认为 0f */
@property (nonatomic, assign) CGFloat indicatorToBottomDistance;
/** 指示器遮盖样式下的边框宽度，默认为 0.0f */
@property (nonatomic, assign) CGFloat indicatorBorderWidth;
/** 指示器遮盖样式下的边框颜色，默认为 clearColor */
@property (nonatomic, strong) UIColor *indicatorBorderColor;
/** 指示器固定样式下宽度，默认为 20.0f；最大宽度并没有做限制，请根据实际情况妥善设置 */
@property (nonatomic, assign) CGFloat indicatorFixedWidth;
/** 指示器动态样式下宽度，默认为 20.0f；最大宽度并没有做限制，请根据实际情况妥善设置 */
@property (nonatomic, assign) CGFloat indicatorDynamicWidth;
/** 指示器滚动位置改变样式，默认为 SGIndicatorScrollStyleDefault */
@property (nonatomic, assign) SGIndicatorScrollStyle indicatorScrollStyle;

#pragma mark - - 按钮之间分割线属性
/** 是否显示按钮之间的分割线，默认为 NO */
@property (nonatomic, assign) BOOL showVerticalSeparator;
/** 按钮之间的分割线颜色，默认为红色 */
@property (nonatomic, strong) UIColor *verticalSeparatorColor;
/** 按钮之间的分割线额外减少的高度，默认为 0.0f */
@property (nonatomic, assign) CGFloat verticalSeparatorReduceHeight;

@end
