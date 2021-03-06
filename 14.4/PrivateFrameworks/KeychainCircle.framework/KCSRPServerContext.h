//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeychainCircle/KCSRPContext.h>

@class NSData;

@interface KCSRPServerContext : KCSRPContext
{
    NSData *_salt;
    NSData *_verifier;
}

- (void).cxx_destruct;
@property(retain) NSData *verifier; // @synthesize verifier=_verifier;
@property(readonly) NSData *salt; // @synthesize salt=_salt;
- (id)copyConfirmationFor:(id)arg1 error:(id *)arg2;
- (id)copyChallengeFor:(id)arg1 error:(id *)arg2;
- (id)initWithUser:(id)arg1 salt:(id)arg2 verifier:(id)arg3 digestInfo:(const struct ccdigest_info *)arg4 group:(struct ccdh_gp *)arg5 randomSource:(struct ccrng_state *)arg6;
- (id)initWithUser:(id)arg1 password:(id)arg2 digestInfo:(const struct ccdigest_info *)arg3 group:(struct ccdh_gp *)arg4 randomSource:(struct ccrng_state *)arg5;
- (_Bool)resetWithPassword:(id)arg1 error:(id *)arg2;

@end

