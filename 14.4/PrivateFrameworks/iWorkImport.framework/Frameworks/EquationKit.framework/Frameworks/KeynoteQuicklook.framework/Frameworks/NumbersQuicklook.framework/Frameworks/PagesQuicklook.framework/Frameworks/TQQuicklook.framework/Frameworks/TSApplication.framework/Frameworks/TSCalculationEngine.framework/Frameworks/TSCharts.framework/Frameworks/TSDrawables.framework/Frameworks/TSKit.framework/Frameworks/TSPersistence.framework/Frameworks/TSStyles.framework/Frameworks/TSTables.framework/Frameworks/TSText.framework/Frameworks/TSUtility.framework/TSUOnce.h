//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>

@protocol OS_dispatch_queue;

@interface TSUOnce : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _didPerformOnce;
}

- (void).cxx_destruct;
- (void)performBlockOnce:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

