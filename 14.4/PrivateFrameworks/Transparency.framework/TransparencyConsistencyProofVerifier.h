//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TransparencyTrustedKeyStore;

@interface TransparencyConsistencyProofVerifier : NSObject
{
    TransparencyTrustedKeyStore *_trustedKeyStore;
}

- (void).cxx_destruct;
@property(retain) TransparencyTrustedKeyStore *trustedKeyStore; // @synthesize trustedKeyStore=_trustedKeyStore;
- (unsigned long long)verifyConsistencyProof:(id)arg1 startLogHead:(id)arg2 endLogHead:(id)arg3 error:(id *)arg4;
- (_Bool)verifyConsistencyProof:(id)arg1 startHash:(id)arg2 startSize:(unsigned long long)arg3 endHash:(id)arg4 endSize:(unsigned long long)arg5 error:(id *)arg6;
- (id)initWithTrustedKeyStore:(id)arg1;

@end

