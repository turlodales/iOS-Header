//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TLTimelineEntryNodeRecycleBin : NSObject
{
}

+ (id)sharedRecycleBin;
@property(readonly, nonatomic) unsigned long long maximumNumberOfRecycledNodes;
@property(readonly, nonatomic) unsigned long long numberOfRecycledNodes;
- (void)emptyRecycleBin;
- (id)retrieveRecycledEntryNode;
- (void)recycleEntryNode:(id)arg1;
- (id)_init;

@end

