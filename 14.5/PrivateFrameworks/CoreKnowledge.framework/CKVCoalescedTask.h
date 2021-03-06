//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CKVCoalescedTask : NSObject
{
    _Bool _isInCoalescingWindow;
    unsigned short _taskId;
    NSDate *_date;
    CDUnknownBlockType _taskBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType taskBlock; // @synthesize taskBlock=_taskBlock;
@property(readonly, nonatomic) _Bool isInCoalescingWindow; // @synthesize isInCoalescingWindow=_isInCoalescingWindow;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned short taskId; // @synthesize taskId=_taskId;
- (id)description;
- (_Bool)isEqualToCoalescedTask:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTaskId:(unsigned short)arg1 date:(id)arg2 isInCoalescingWindow:(_Bool)arg3 taskBlock:(CDUnknownBlockType)arg4;

@end

