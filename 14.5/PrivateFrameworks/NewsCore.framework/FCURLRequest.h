//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURLRequest;

@interface FCURLRequest : NSObject
{
    NSURLRequest *_URLRequest;
    long long _destination;
    long long _priority;
    NSDate *_dateInitiated;
    NSString *_loggingKey;
    CDUnknownBlockType _completion;
    long long _remainingRetries;
}

- (void).cxx_destruct;
- (id)description;

@end

