//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIconAnimator;

@protocol SBIconAnimatorDelegate <NSObject>
- (void)iconAnimatorWasInvalidated:(SBIconAnimator *)arg1;

@optional
- (_Bool)iconAnimator:(SBIconAnimator *)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(void (^)(void))arg2;
@end

