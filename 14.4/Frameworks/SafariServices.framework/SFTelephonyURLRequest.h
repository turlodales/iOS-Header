//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFTelephonyURLRequest : NSObject
{
    NSString *_successNotificationName;
    NSString *_failureNotificationName;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSString *failureNotificationName; // @synthesize failureNotificationName=_failureNotificationName;
@property(retain, nonatomic) NSString *successNotificationName; // @synthesize successNotificationName=_successNotificationName;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

