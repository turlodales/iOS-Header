//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXPlacesSnapshotFactory;
@protocol OS_dispatch_queue;

@interface PXPlacesSearchProvider : NSObject
{
    PXPlacesSnapshotFactory *_factory;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) PXPlacesSnapshotFactory *factory; // @synthesize factory=_factory;
- (void)requestMapSnapshotForQuery:(id)arg1 ofSize:(struct CGSize)arg2 traitCollectionForSnapshot:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

