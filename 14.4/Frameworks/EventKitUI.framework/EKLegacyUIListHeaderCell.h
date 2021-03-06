//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class EKLegacyUIListHeaderCellContentView;

@interface EKLegacyUIListHeaderCell : UITableViewHeaderFooterView
{
    EKLegacyUIListHeaderCellContentView *_contentView;
    _Bool _showWeekNumber;
}

+ (double)timeWidthIncludingDots:(_Bool)arg1;
+ (void)_invalidateWidths;
+ (void)_calculateWidths;
+ (id)_allDayLocalizedString;
+ (id)_noonLocalizedString;
+ (double)xMidpointForCalendarDot;
- (void).cxx_destruct;
@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
- (void)setNeedsDisplay;
@property(readonly, nonatomic) _Bool reusable;
@property(nonatomic) _Bool indentsForDots;
@property(nonatomic) double date;
- (id)initWithFrame:(struct CGRect)arg1 date:(double)arg2;

@end

