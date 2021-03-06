//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INSiriAuthorizationManagerExport <NSObject, JSExport>
+ (_Bool)_isSiriAuthorizationRestricted;
+ (void)_requestSiriAuthorization:(void (^)(long long))arg1 auditToken:(CDStruct_4c969caf)arg2;
+ (long long)_siriAuthorizationStatusForAppID:(NSString *)arg1;
- (id)init;
@end

