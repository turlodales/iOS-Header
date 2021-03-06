//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKCalendarDayCell.h>

@interface HKMonthDayCell : HKCalendarDayCell
{
    long long _dayOfWeek;
    long long _circleState;
}

+ (double)dayLabelFontSize;
@property(readonly, nonatomic) long long circleState; // @synthesize circleState=_circleState;
- (void)setSelected:(_Bool)arg1;
- (void)pressToTransition:(_Bool)arg1;
- (void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2;
- (_Bool)_representsWeekendDay;
- (void)_setCircleState:(long long)arg1;
- (void)dealloc;
- (void)_updateFontAndCircle;
- (id)initWithDateCache:(id)arg1;

@end

