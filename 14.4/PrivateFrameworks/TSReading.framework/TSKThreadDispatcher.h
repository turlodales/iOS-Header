//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSKThreadDispatcher : NSObject
{
}

+ (id)sharedInstance;
- (id)p_dispatchQueue;
- (void)dispatchSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (void)dispatch:(CDUnknownBlockType)arg1;

@end

