//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SRCompactResultView;

@protocol SRCompactResultViewDelegate
- (void)resultViewContentScrolled:(SRCompactResultView *)arg1 toContentOffset:(struct CGPoint)arg2;
- (struct UIEdgeInsets)contentInsetsForResultView:(SRCompactResultView *)arg1;
- (double)maximumHeightForResultView:(SRCompactResultView *)arg1;
- (void)resultViewContentDidLoad:(SRCompactResultView *)arg1;
- (void)resultViewDarkenedContentWasTapped:(SRCompactResultView *)arg1;
- (void)resultViewContentDidScroll:(SRCompactResultView *)arg1;
@end

