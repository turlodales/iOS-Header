//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface TSKAccessControllerWriterQueueItem : NSObject
{
    NSThread *_threadIdentifier;
}

+ (id)priorityPrimaryThreadWriterQueueItemForAccessController:(id)arg1;
+ (id)writerQueueItemWithThreadIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSThread *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
- (id)description;
@property(readonly, nonatomic) _Bool didTakePriority;
- (id)initWithThreadIdentifier:(id)arg1;

@end

