//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface BSXPCReply : NSObject
{
    NSObject<OS_xpc_object> *_reply;
    int _sent;
}

+ (id)messageWithReply:(id)arg1;
+ (id)replyForMessage:(id)arg1;
- (void).cxx_destruct;
- (id)message;
- (long long)messageKind;
- (id)initWithReply:(id)arg1;
- (void)sendReply:(CDUnknownBlockType)arg1;
- (id)initForMessage:(id)arg1;

@end

