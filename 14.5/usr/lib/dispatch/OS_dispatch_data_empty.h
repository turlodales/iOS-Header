//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <dispatch/OS_dispatch_data.h>

__attribute__((visibility("hidden")))
@interface OS_dispatch_data_empty : OS_dispatch_data
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_activate;
- (void)_resume;
- (void)_suspend;
- (void)_setTargetQueue:(id)arg1;
- (void)_setFinalizer:(CDUnknownFunctionPointerType)arg1;
- (void *)_getContext;
- (void)_setContext:(void *)arg1;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;

@end

