//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMMotionUtils : NSObject
{
}

+ (unsigned long long)copyDataFrom:(id)arg1 to:(id)arg2;
+ (id)fileHandleForWritingToURL:(id)arg1;
+ (id)getExecutablePathFromPid:(int)arg1;
+ (long long)isAuthorizedForEntitlement:(id)arg1;
+ (long long)authorizationStatus;
+ (_Bool)featureAvailability:(const char *)arg1;
+ (void)tccServiceMotionAccessWithBlock:(CDUnknownBlockType)arg1;
+ (void)tccServiceMotionAccessWithLabel:(id)arg1;
+ (_Bool)hasEntitlement:(id)arg1;
+ (_Bool)isMotionActivityEntitled;
+ (_Bool)sendMessageSync:(shared_ptr_bdcc6d0f)arg1 onConnection:(struct CLConnectionClient *)arg2 timeoutAfter:(double)arg3 withReplyHandler:(CDUnknownBlockType)arg4;
+ (id)sendMessage:(shared_ptr_bdcc6d0f)arg1 withReplyClassesSync:(id)arg2;
+ (void)sendMessage:(shared_ptr_bdcc6d0f)arg1 withReplyClasses:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)logDirectory;

@end

