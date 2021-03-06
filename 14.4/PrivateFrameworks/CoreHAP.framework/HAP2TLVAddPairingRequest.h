//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAP2TLVPairingMethodWrapper, HAP2TLVPairingStateWrapper, HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HAP2TLVAddPairingRequest : NSObject <NSCopying, HAPTLVProtocol>
{
    HAP2TLVPairingStateWrapper *_state;
    HAP2TLVPairingMethodWrapper *_method;
    NSString *_identifier;
    NSData *_publicKey;
    HAPTLVUnsignedNumberValue *_permissions;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *permissions; // @synthesize permissions=_permissions;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) HAP2TLVPairingMethodWrapper *method; // @synthesize method=_method;
@property(retain, nonatomic) HAP2TLVPairingStateWrapper *state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithState:(id)arg1 method:(id)arg2 identifier:(id)arg3 publicKey:(id)arg4 permissions:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

