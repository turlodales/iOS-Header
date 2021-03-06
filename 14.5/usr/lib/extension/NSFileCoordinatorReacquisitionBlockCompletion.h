//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFileCoordinationRetainedAccess-Protocol.h>

@class NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface NSFileCoordinatorReacquisitionBlockCompletion : NSObject <NSFileCoordinationRetainedAccess>
{
    NSObject<OS_dispatch_group> *group;
}

+ (id)completionWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)decrement;
- (void)increment;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

