//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADBannerViewDelegate-Protocol.h"

@class NSString;
@protocol ADBannerViewDelegate;

@interface FRBannerViewLoadDelegater : NSObject <ADBannerViewDelegate>
{
    id <ADBannerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ADBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

