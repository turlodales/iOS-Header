//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DNDSLifetimeMonitorResult : NSObject
{
    NSArray *_activeUUIDs;
    NSArray *_expiredUUIDs;
}

@property(readonly, copy, nonatomic) NSArray *expiredUUIDs; // @synthesize expiredUUIDs=_expiredUUIDs;
@property(readonly, copy, nonatomic) NSArray *activeUUIDs; // @synthesize activeUUIDs=_activeUUIDs;
- (void).cxx_destruct;
- (id)initWithActiveUUIDs:(id)arg1 expiredUUIDs:(id)arg2;

@end

