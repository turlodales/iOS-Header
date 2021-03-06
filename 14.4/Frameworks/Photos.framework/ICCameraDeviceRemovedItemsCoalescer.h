//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, PHImportDeviceSource;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_lastNotify;
    NSMutableArray *_items;
    PHImportDeviceSource *_source;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (void)coalesceItems:(id)arg1;
- (id)initWithDevice:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

