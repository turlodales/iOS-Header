//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABSCallbackInvoker : NSObject
{
    void *addressBook;
    CDUnknownFunctionPointerType callback;
    void *context;
}

+ (void)invokeOnThread:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 withAddressBook:(void *)arg3 context:(void *)arg4;
- (void)invoke;

@end

