//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface CSDispatchGroup : NSObject
{
    NSObject<OS_dispatch_group> *_dispatchGroup;
    int _dispatchGroupCounter;
}

- (void).cxx_destruct;
- (long long)waitWithTimeout:(unsigned long long)arg1;
- (void)leave;
- (void)enter;
- (id)init;

@end

