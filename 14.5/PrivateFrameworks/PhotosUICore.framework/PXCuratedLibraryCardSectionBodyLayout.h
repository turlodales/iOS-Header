//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGDisplayAssetSource-Protocol.h>

@class NSMutableIndexSet, NSString, PXAssetsDataSource, PXCuratedLibraryCardSectionBodyLayoutSpec, PXCuratedLibrarySectionGeometryDescriptor, PXGLayoutGuide, PXIndexPathSet;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout <PXGDisplayAssetSource>
{
    unsigned short _assetVersion;
    id <PXDisplayAsset> _keyAsset;
    CDStruct_d97c9657 _updateFlags;
    CDStruct_d97c9657 _postUpdateFlags;
    struct _PXGSpriteIndexRange _assetSpriteIndexRange;
    NSMutableIndexSet *_axSpriteIndexes;
    _Bool _isSelected;
    _Bool _isSkimming;
    long long _section;
    PXAssetsDataSource *_dataSource;
    long long _zoomLevel;
    PXCuratedLibraryCardSectionBodyLayoutSpec *_spec;
    PXIndexPathSet *_skimmingIndexPaths;
    long long _maxSkimmingIndex;
    long long _currentSkimmingIndex;
    PXGLayoutGuide *_assetLayoutGuide;
    id <PXDisplayAssetFetchResult> _keyAssetsFetchResult;
    struct PXSimpleIndexPath _sectionIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> keyAssetsFetchResult; // @synthesize keyAssetsFetchResult=_keyAssetsFetchResult;
@property(readonly, nonatomic) struct PXSimpleIndexPath sectionIndexPath; // @synthesize sectionIndexPath=_sectionIndexPath;
@property(readonly, nonatomic) PXGLayoutGuide *assetLayoutGuide; // @synthesize assetLayoutGuide=_assetLayoutGuide;
@property(nonatomic) long long currentSkimmingIndex; // @synthesize currentSkimmingIndex=_currentSkimmingIndex;
@property(nonatomic) long long maxSkimmingIndex; // @synthesize maxSkimmingIndex=_maxSkimmingIndex;
@property(retain, nonatomic) PXIndexPathSet *skimmingIndexPaths; // @synthesize skimmingIndexPaths=_skimmingIndexPaths;
@property(nonatomic) _Bool isSkimming; // @synthesize isSkimming=_isSkimming;
@property(retain, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) PXAssetsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;
- (id)axSelectedSpriteIndexes;
- (id)axSpriteIndexes;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)screenScaleDidChange;
- (void)referenceSizeDidChange;
- (void)_updateKeyAssetFetchResultWithDataSource:(id)arg1 section:(long long)arg2;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;
- (id)layoutForItemChanges;
@property(readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
- (id)axVisibleSpriteIndexes;
- (void)_updateAXSprites;
- (void)_updateSprites;
- (void)update;
@property(readonly, nonatomic) struct CGRect assetFrame;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

