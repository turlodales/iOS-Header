//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CompactMonthWeekView.h"

@interface LargeTextLargeMonthWeekView : CompactMonthWeekView
{
}

+ (_Bool)usesRoundedRectInsteadOfCircle;
+ (double)grayLineHeight;
+ (double)spaceBelowGrayLineHeight:(_Bool)arg1;
+ (struct CGPoint)eventMarkerPositionForColumnWidth:(double)arg1 rowHeight:(double)arg2 compressed:(_Bool)arg3 showingOverlay:(_Bool)arg4;
+ (double)eventMarkerDiameter:(_Bool)arg1;
+ (double)dayNumberBaselineToGrayLineDistance:(_Bool)arg1;
+ (struct UIEdgeInsets)layoutMarginsForBounds:(struct CGRect)arg1;
+ (id)weekNumberFont;
+ (double)dayNumberOverlayFontSize:(_Bool)arg1;
+ (double)dayNumberFontSize:(_Bool)arg1;
- (struct CGPoint)positionOfCircleInCellWithWidth:(double)arg1 circleSize:(struct CGSize)arg2;
- (struct CGRect)frameForHighlightWithDayFrame:(struct CGRect)arg1 dayLayerFrame:(struct CGRect)arg2 numberString:(id)arg3 overlayString:(id)arg4;
- (double)_yOffsetForRoundedRect;
- (void)updateEventMarkerVisibilityForDayNumber:(id)arg1 withEventCount:(unsigned long long)arg2;
- (void)updateEventMarkerLayoutForDayNumber:(id)arg1 yOffset:(double)arg2;

@end

