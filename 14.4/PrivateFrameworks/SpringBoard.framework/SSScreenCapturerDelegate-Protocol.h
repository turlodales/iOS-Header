//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, SSScreenCapturer;

@protocol SSScreenCapturerDelegate <NSObject>
- (void)_screenshotWindowWasDismissed;
- (void)_screenshotWindowWillBeDisplayed;
- (void)screenCapturer:(SSScreenCapturer *)arg1 didCaptureScreenshotsOfScreens:(NSArray *)arg2;
@end

