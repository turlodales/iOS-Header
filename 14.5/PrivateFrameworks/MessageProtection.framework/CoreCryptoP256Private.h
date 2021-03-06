//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageProtection/P256PrivateKeyProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CoreCryptoP256Private : NSObject <P256PrivateKeyProtocol>
{
    struct ccec_full_ctx *_full_key;
}

+ (id)generate;
@property struct ccec_full_ctx *full_key; // @synthesize full_key=_full_key;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)keychainData;
- (void)dealloc;
- (id)publicKey;
- (id)keyAgreement:(id)arg1 error:(id *)arg2;
- (id)initWithKey:(struct ccec_full_ctx *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

