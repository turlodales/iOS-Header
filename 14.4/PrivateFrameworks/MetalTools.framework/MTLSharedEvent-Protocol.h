//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLEvent-Protocol.h>

@class MTLSharedEventHandle, MTLSharedEventListener;

@protocol MTLSharedEvent <MTLEvent>
@property unsigned long long signaledValue;
- (MTLSharedEventHandle *)newSharedEventHandle;
- (void)notifyListener:(MTLSharedEventListener *)arg1 atValue:(unsigned long long)arg2 block:(void (^)(id <MTLSharedEvent>, unsigned long long))arg3;
@end

