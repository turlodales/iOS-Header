//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BYXPCActivityRegistrar : NSObject
{
}

+ (id)sharedInstance;
- (void)unregisterActivityWithIdentifier:(const char *)arg1;
- (void)registerActivityWithIdentifier:(const char *)arg1 criteria:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

