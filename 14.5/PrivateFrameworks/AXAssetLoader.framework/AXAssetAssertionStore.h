//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface AXAssetAssertionStore : NSObject
{
    struct os_unfair_lock_s _lock;
    NSUserDefaults *_defaults;
}

+ (id)store;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void)_mutateAssertionsForAssetType:(id)arg1 assertions:(id)arg2 mutationBlock:(CDUnknownBlockType)arg3;
- (void)_mutateAssetAssertions:(CDUnknownBlockType)arg1;
- (void)_performWithLock:(CDUnknownBlockType)arg1;
- (id)heldAssertionsForAssetType:(id)arg1;
- (void)discardAllAssertionsOfType:(id)arg1;
- (void)discardAllAssertionsOfType:(id)arg1 heldByClient:(id)arg2;
- (void)discardAssertion:(id)arg1;
- (void)requestAssertion:(id)arg1;
- (id)_init;

@end

