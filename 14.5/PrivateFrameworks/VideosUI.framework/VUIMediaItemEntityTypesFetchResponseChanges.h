//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUICollectionChangeSet;

__attribute__((visibility("hidden")))
@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject
{
    _Bool _localMediaItemsAvailableDidChange;
    VUICollectionChangeSet *_mediaItemEntityTypesChangeSet;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool localMediaItemsAvailableDidChange; // @synthesize localMediaItemsAvailableDidChange=_localMediaItemsAvailableDidChange;
@property(readonly, nonatomic) VUICollectionChangeSet *mediaItemEntityTypesChangeSet; // @synthesize mediaItemEntityTypesChangeSet=_mediaItemEntityTypesChangeSet;
- (id)description;
- (id)initWithMediaItemEntityTypesChangeSet:(id)arg1 localMediaItemsAvailableDidChange:(_Bool)arg2;
- (id)init;

@end

