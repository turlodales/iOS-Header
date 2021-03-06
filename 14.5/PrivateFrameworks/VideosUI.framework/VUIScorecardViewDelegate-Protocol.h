//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSString, UIImage, VUIScorecardView;

@protocol VUIScorecardViewDelegate <NSObject>
- (double)maximumWidthForScorecardView:(VUIScorecardView *)arg1;
- (NSString *)scoreValue:(VUIScorecardView *)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (long long)numberOfScoreValuesForScorecardView:(VUIScorecardView *)arg1 inRow:(long long)arg2;
- (long long)numberOfRowsInScorecardView:(VUIScorecardView *)arg1;
- (long long)styleForScorecardView:(VUIScorecardView *)arg1;

@optional
- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;
- (UIImage *)backgroundImageForScorecardViewMaterial:(VUIScorecardView *)arg1;
@end

