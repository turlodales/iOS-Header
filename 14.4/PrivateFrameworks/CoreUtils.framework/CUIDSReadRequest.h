//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUIDSReadRequest : NSObject
{
    unsigned long long minLen;
    unsigned long long maxLen;
    char *buffer;
    unsigned long long len;
    CUIDSReadRequest *next;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end

