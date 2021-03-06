//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMSetupAccessoryPayload, NSError;

@interface HFSetupAccessoryResult : NSObject
{
    _Bool _hasAddRequest;
    _Bool _isValidForPairing;
    NSError *_error;
    HMSetupAccessoryPayload *_setupPayload;
}

+ (_Bool)isHomeKitURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValidForPairing; // @synthesize isValidForPairing=_isValidForPairing;
@property(readonly, nonatomic) _Bool hasAddRequest; // @synthesize hasAddRequest=_hasAddRequest;
@property(readonly, nonatomic) HMSetupAccessoryPayload *setupPayload; // @synthesize setupPayload=_setupPayload;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)isAllZerosCode;
- (id)description;
- (id)initWithSetupCode:(id)arg1;
- (id)initWithSetupURL:(id)arg1;
- (id)initWithPayload:(id)arg1 hasAddRequest:(_Bool)arg2;
- (id)initWithPayload:(id)arg1 error:(id)arg2 hasAddRequest:(_Bool)arg3;

@end

