//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class NSArray, PXCuratedLibraryLayoutSpec;

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager
{
    NSArray *_availableThumbnailSizes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *availableThumbnailSizes; // @synthesize availableThumbnailSizes=_availableThumbnailSizes;
- (_Bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (id)createSpec;
- (Class)specClass;

// Remaining properties
@property(readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec; // @dynamic spec;

@end

