//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNCapabilities-Protocol.h>

@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>
{
}

+ (_Bool)shouldUseLegacyMessages;
@property(readonly, nonatomic) _Bool isPaySupported;
@property(readonly, nonatomic) _Bool isFaceTimeAudioSupported;
@property(readonly, nonatomic) _Bool isFaceTimeVideoSupported;
@property(readonly, nonatomic) _Bool isiMessageSupported;
@property(readonly, nonatomic) _Bool areTelephonyCallsSupported;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

