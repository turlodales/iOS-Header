//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIconView, UITouch;

@protocol SBIconViewActionDelegate <NSObject>

@optional
- (void)iconCloseBoxTapped:(SBIconView *)arg1;
- (void)iconTapped:(SBIconView *)arg1;
- (void)icon:(SBIconView *)arg1 touchEnded:(_Bool)arg2;
- (void)icon:(SBIconView *)arg1 touchMoved:(UITouch *)arg2;
- (void)iconTouchBegan:(SBIconView *)arg1;
@end

