//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface _LSOpenCopierContext : NSObject
{
    int _callbackType;
    NSURL *_destURL;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *destURL; // @synthesize destURL=_destURL;
@property(nonatomic) int callbackType; // @synthesize callbackType=_callbackType;

@end

