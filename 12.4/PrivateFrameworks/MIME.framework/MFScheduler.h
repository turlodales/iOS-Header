//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFScheduler : NSObject
{
}

+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)mainThreadScheduler;
+ (id)globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;

@end

