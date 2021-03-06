//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_offers;
}

+ (id)_offerFullPath;
+ (id)_offerPath;
+ (id)defaultOfferManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *offers; // @synthesize offers=_offers;
- (void)_setOffers:(id)arg1;
- (id)_offers;
- (void)_activeAccountChangedNotification:(id)arg1;
- (id)_connection;
- (void)clearOffers:(CDUnknownBlockType)arg1;
- (void)fetchOffers:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveOffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

