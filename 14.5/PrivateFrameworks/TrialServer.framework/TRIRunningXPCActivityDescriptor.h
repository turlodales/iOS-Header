//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSString;
@protocol OS_os_transaction, OS_xpc_object;

@interface TRIRunningXPCActivityDescriptor : NSObject <NSCopying>
{
    NSObject<OS_os_transaction> *_txn;
    NSString *_name;
    CDUnknownBlockType _shouldDefer;
    CDUnknownBlockType _completion;
    NSObject<OS_xpc_object> *_activity;
    unsigned long long _capabilities;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType shouldDefer; // @synthesize shouldDefer=_shouldDefer;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForImmediateWorkWithCapabilities:(unsigned long long)arg1;
- (id)initWithActivity:(id)arg1 capabilities:(unsigned long long)arg2 name:(id)arg3;
- (id)init;

@end

