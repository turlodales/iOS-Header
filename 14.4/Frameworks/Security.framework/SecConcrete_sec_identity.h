//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/OS_sec_identity-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_identity : NSObject <OS_sec_identity>
{
    struct __SecIdentity *identity;
    struct __CFArray *certs;
    CDUnknownBlockType sign_block;
    CDUnknownBlockType decrypt_block;
    NSObject<OS_dispatch_queue> *operation_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCertificates:(struct __CFArray *)arg1 signBlock:(CDUnknownBlockType)arg2 decryptBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)initWithIdentityAndCertificates:(struct __SecIdentity *)arg1 certificates:(struct __CFArray *)arg2;
- (id)initWithIdentity:(struct __SecIdentity *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

