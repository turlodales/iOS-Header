//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding>
{
    _Bool _hasSubscriptionLease;
    _Bool _hasSubscriptionSlot;
}

@property(nonatomic) _Bool hasSubscriptionSlot; // @synthesize hasSubscriptionSlot=_hasSubscriptionSlot;
@property(nonatomic) _Bool hasSubscriptionLease; // @synthesize hasSubscriptionLease=_hasSubscriptionLease;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

