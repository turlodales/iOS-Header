//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KCSRPContext : NSObject
{
    struct ccsrp_ctx *_context;
    struct ccrng_state *_rng;
    NSString *_user;
}

+ (id)createWithUser:(id)arg1 digestInfo:(const struct ccdigest_info *)arg2 group:(struct ccdh_gp *)arg3 randomSource:(struct ccrng_state *)arg4;
- (void).cxx_destruct;
@property(retain) NSString *user; // @synthesize user=_user;
@property struct ccrng_state *rng; // @synthesize rng=_rng;
@property struct ccsrp_ctx *context; // @synthesize context=_context;
- (_Bool)isAuthenticated;
- (id)getKey;
- (void)finalize;
- (id)initWithUser:(id)arg1 digestInfo:(const struct ccdigest_info *)arg2 group:(struct ccdh_gp *)arg3 randomSource:(struct ccrng_state *)arg4;
- (const char *)userNameString;
- (id)dataForPassword:(id)arg1;

@end

