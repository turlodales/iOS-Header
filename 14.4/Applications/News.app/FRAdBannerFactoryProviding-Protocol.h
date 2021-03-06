//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADLayoutOptions, FRBannerView, NSSet, NSString;
@protocol ADBannerViewDelegate, FRFeedAdInventoryDelegate;

@protocol FRAdBannerFactoryProviding <NSObject>
@property(readonly, nonatomic) NSSet *context;
@property(readonly, copy, nonatomic) NSString *tileIdentifier;
@property(readonly, copy, nonatomic) NSString *uniqueRequestIdentifier;
@property(readonly, nonatomic) id <FRFeedAdInventoryDelegate> adInventoryDelegate;
- (FRBannerView *)buildBannerViewWithDelegate:(id <ADBannerViewDelegate>)arg1 layoutOptions:(ADLayoutOptions *)arg2;
@end

