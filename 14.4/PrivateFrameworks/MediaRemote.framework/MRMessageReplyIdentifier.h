//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRMessageReplyIdentifier : NSObject
{
    unsigned long long _messageNumber;
    CDUnknownBlockType _reply;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(nonatomic) unsigned long long messageNumber; // @synthesize messageNumber=_messageNumber;

@end

