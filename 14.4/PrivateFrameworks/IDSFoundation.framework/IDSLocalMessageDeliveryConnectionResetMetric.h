//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSLocalMessageDeliveryConnectionResetMetric : NSObject <CUTCoreAnalyticsMetric>
{
    _Bool _isToDefaultPairedDevice;
    NSString *_service;
    unsigned long long _messageSize;
    unsigned long long _linkType;
    unsigned long long _deliveryError;
    unsigned long long _RTT;
    unsigned long long _priority;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long RTT; // @synthesize RTT=_RTT;
@property(readonly, nonatomic) unsigned long long deliveryError; // @synthesize deliveryError=_deliveryError;
@property(readonly, nonatomic) unsigned long long linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, nonatomic) _Bool isToDefaultPairedDevice; // @synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (id)initWithService:(id)arg1 isToDefaultPairedDevice:(_Bool)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 deliveryError:(unsigned long long)arg5 RTT:(unsigned long long)arg6 priority:(unsigned long long)arg7;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

