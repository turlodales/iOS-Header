//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSCTSIM-Protocol.h>

@class CTXPCServiceSubscriptionContext, NSString;

@interface IDSCTSIM : NSObject <IDSCTSIM>
{
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    CTXPCServiceSubscriptionContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *mobileNetworkCode;
@property(readonly, nonatomic) NSString *mobileCountryCode;
@property(readonly, nonatomic) _Bool isDefaultVoiceSIM;
@property(readonly, nonatomic) unsigned long long slot;
@property(readonly, nonatomic) NSString *SIMIdentifier;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *label;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

