//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@interface PXCollectionsDataSource : PXSectionedDataSource
{
    id _content;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id content; // @synthesize content=_content;
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)countForCollection:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)indexPathForCollection:(id)arg1;

@end

