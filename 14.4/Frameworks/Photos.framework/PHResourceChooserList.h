//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSMutableArray, NSSortDescriptor;
@protocol PHResourceChooserAsset;

@interface PHResourceChooserList : NSObject
{
    id <PHResourceChooserAsset> _asset;
    CDUnknownBlockType _itemHandler;
    CDUnknownBlockType _endOfListHandler;
    long long _hintDataCurrentOffset;
    long long _hintDataNextItemOffset;
    _Bool _finishedPresentingFromHints;
    _Bool _didObserveThumbnailStoreKey;
    NSSortDescriptor *_sortDescriptor;
    NSManagedObjectContext *_context;
    NSArray *_nonHintResources;
    NSArray *_unvisitedNonHintResources;
    unsigned long long _lastPresentedFullResourceIndex;
    _Bool _finishedPresentingFromFetchedResources;
    NSMutableArray *_visitedKeys;
    unsigned long long _enumerationDirection;
}

- (void).cxx_destruct;
- (id)init;

@end

