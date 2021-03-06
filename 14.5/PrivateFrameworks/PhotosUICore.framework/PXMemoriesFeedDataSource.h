//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

#import <PhotosUICore/PXSectionedLayoutEngineDataSourceSnapshot-Protocol.h>

@class NSArray, NSString;

@interface PXMemoriesFeedDataSource : PXSectionedDataSource <PXSectionedLayoutEngineDataSourceSnapshot>
{
    NSArray *_entries;
    struct PXSimpleIndexPath _indexPathForFirstPastMemorySection;
}

- (void).cxx_destruct;
@property(nonatomic) struct PXSimpleIndexPath indexPathForFirstPastMemorySection; // @synthesize indexPathForFirstPastMemorySection=_indexPathForFirstPastMemorySection;
@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)inputForItem:(id)arg1;
- (id)sectionedObjectReferenceForMemoryUUID:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 withHintIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)_enumerateItemIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateSectionIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateSectionIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct PXSimpleIndexPath)_firstSectionIndexPath;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (id)init;
- (id)initWithEntries:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long identifier;
@property(readonly) Class superclass;

@end

