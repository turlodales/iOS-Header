//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/SFSafariViewControllerDelegate-Protocol.h>

@class LSAppLink, NSURL, SFSafariViewController;

@protocol SFSafariViewControllerDelegateInternal <SFSafariViewControllerDelegate>

@optional
- (void)safariViewController:(SFSafariViewController *)arg1 didResolveRedirectionWithURL:(NSURL *)arg2 appLink:(LSAppLink *)arg3;
- (void)safariViewController:(SFSafariViewController *)arg1 hostApplicationOpenURL:(NSURL *)arg2;
- (void)safariViewController:(SFSafariViewController *)arg1 didDecideCookieSharingForURL:(NSURL *)arg2 shouldCancel:(_Bool)arg3;
@end

