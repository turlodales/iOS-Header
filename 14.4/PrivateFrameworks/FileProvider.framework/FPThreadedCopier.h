//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface FPThreadedCopier : NSObject
{
    long long _numberOfInflightCopies;
    NSObject<OS_dispatch_semaphore> *_bufferLimitSemaphore;
    NSMutableArray *_buffers;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

+ (id)sharedCopier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(retain, nonatomic) NSMutableArray *buffers; // @synthesize buffers=_buffers;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferLimitSemaphore; // @synthesize bufferLimitSemaphore=_bufferLimitSemaphore;
@property(nonatomic) long long numberOfInflightCopies; // @synthesize numberOfInflightCopies=_numberOfInflightCopies;
- (void)endOperation;
- (void)beginOperation;
- (_Bool)finishReading:(int)arg1 writing:(int)arg2 error:(id *)arg3;
- (int)beginWriting:(id)arg1 overwriteDestination:(_Bool)arg2 error:(id *)arg3;
- (int)beginReading:(id)arg1 error:(id *)arg2;
- (_Bool)copy:(id)arg1 to:(id)arg2 overwriteDestination:(_Bool)arg3 progress:(id)arg4 error:(id *)arg5;
- (id)init;

@end

