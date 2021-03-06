//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNavigationListItem.h>

@class PHAssetCollection;

@interface PXNavigationListAssetCollectionItem : PXNavigationListItem
{
    _Bool _draggable;
    _Bool _reorderable;
    _Bool _renamable;
    _Bool _deletable;
    PHAssetCollection *_collection;
    long long _indentationLevel;
}

- (void).cxx_destruct;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(readonly, nonatomic) PHAssetCollection *collection; // @synthesize collection=_collection;
- (_Bool)isDeletable;
- (_Bool)isRenamable;
- (_Bool)isReorderable;
- (_Bool)isDraggable;
- (id)representedObject;
- (id)glyphImageName;
- (id)imageNameForIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetCollection:(id)arg1 itemCount:(long long)arg2;
- (id)cpAnalyticsEventName;
- (id)viewControllerForCollectionWithGridPresentation:(id)arg1 existingAssetsFetchResult:(id)arg2;

@end

