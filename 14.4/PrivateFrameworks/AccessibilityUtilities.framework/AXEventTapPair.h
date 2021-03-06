//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXEventTapPair : NSObject
{
    int priority;
    int _type;
    CDUnknownBlockType handler;
    NSString *identifier;
    struct __IOHIDEventSystemClient *_systemClient;
    CDUnknownBlockType _matchingServiceHandler;
    CDUnknownBlockType _failedToHandleInTime;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedToHandleInTime; // @synthesize failedToHandleInTime=_failedToHandleInTime;
@property(copy, nonatomic) CDUnknownBlockType matchingServiceHandler; // @synthesize matchingServiceHandler=_matchingServiceHandler;
@property(retain, nonatomic) struct __IOHIDEventSystemClient *systemClient; // @synthesize systemClient=_systemClient;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int priority; // @synthesize priority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
- (id)description;
- (void)dealloc;

@end

