//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class NSString, WFInstapaperLoginViewController;

@protocol WFInstapaperLoginViewControllerDelegate <NSObject>

@optional
- (void)instapaperLoginViewControllerDidCancel:(WFInstapaperLoginViewController *)arg1;
- (void)instapaperLoginViewController:(WFInstapaperLoginViewController *)arg1 authenticatedWithUsername:(NSString *)arg2 token:(NSString *)arg3 tokenSecret:(NSString *)arg4;
@end

