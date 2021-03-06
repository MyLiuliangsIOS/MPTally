//
//  MPFormDatePicker.h
//  MPTally
//
//  Created by Maple on 2017/3/27.
//  Copyright © 2017年 Maple. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MPFormDatePickerDelegate <NSObject>
/// 选择的日期
- (void)formDatePickerDidSelectDate:(NSDate *)date;

@optional
/// 切换了状态
- (void)formDataPickerDidChangeStatus;

@end

typedef NS_ENUM(NSInteger, MPDatePickerMode)
{
    MPDatePickerYear = 1,     // 显示年
    MPDatePickerYearMonth = 0 // 显示年月
};

/// 报表时间选择器
@interface MPFormDatePicker : UIView

@property (nonatomic, weak) id<MPFormDatePickerDelegate> delegate;
/// 指定显示的格式，默认显示年月
@property (nonatomic, assign) MPDatePickerMode pickerMode;

@end
