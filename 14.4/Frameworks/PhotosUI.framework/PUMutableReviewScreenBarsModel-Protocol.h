//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, UIView;

@protocol PUMutableReviewScreenBarsModel
@property(nonatomic) struct CGPoint controlCenterAlignmentPoint;
@property(nonatomic) _Bool useVerticalControlLayout;
@property(nonatomic, getter=isTransitioningWithCamera) _Bool transitioningWithCamera;
@property(nonatomic) _Bool shouldPlaceScrubberInScrubberBar;
@property(retain, nonatomic) UIView *accessoryView;
@property(copy, nonatomic) NSDictionary *availableItemsByIdentifier;
- (void)setControlCenterAlignmentPoint:(struct CGPoint)arg1 forceLayout:(_Bool)arg2;
@end

