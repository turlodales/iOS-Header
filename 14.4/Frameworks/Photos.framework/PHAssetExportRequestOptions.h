//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PHAssetExportRequestOptions : NSObject
{
    _Bool _includeAllAssetResources;
    _Bool _treatLivePhotoAsStill;
    _Bool _flattenSlomoVideos;
    _Bool _dontAllowRAW;
    _Bool _shouldStripLocation;
    _Bool _shouldStripCaption;
    _Bool _shouldStripAccessibilityDescription;
    _Bool _disableMetadataCorrections;
    _Bool _shouldBundleComplexAssetResources;
    _Bool _forceDateTimeMetadataBaking;
    _Bool _forceLocationMetadataBaking;
    _Bool _forceCaptionMetadataBaking;
    _Bool _forceAccessibilityDescriptionMetadataBaking;
    long long _variant;
    NSString *_videoExportPreset;
    NSString *_videoExportFileType;
    NSString *_customFilenameBase;
    long long _locationComparisonStrategy;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceAccessibilityDescriptionMetadataBaking; // @synthesize forceAccessibilityDescriptionMetadataBaking=_forceAccessibilityDescriptionMetadataBaking;
@property(nonatomic) _Bool forceCaptionMetadataBaking; // @synthesize forceCaptionMetadataBaking=_forceCaptionMetadataBaking;
@property(nonatomic) _Bool forceLocationMetadataBaking; // @synthesize forceLocationMetadataBaking=_forceLocationMetadataBaking;
@property(nonatomic) _Bool forceDateTimeMetadataBaking; // @synthesize forceDateTimeMetadataBaking=_forceDateTimeMetadataBaking;
@property(nonatomic) long long locationComparisonStrategy; // @synthesize locationComparisonStrategy=_locationComparisonStrategy;
@property(copy, nonatomic) NSString *customFilenameBase; // @synthesize customFilenameBase=_customFilenameBase;
@property(nonatomic) _Bool shouldBundleComplexAssetResources; // @synthesize shouldBundleComplexAssetResources=_shouldBundleComplexAssetResources;
@property(nonatomic) _Bool disableMetadataCorrections; // @synthesize disableMetadataCorrections=_disableMetadataCorrections;
@property(copy, nonatomic) NSString *videoExportFileType; // @synthesize videoExportFileType=_videoExportFileType;
@property(copy, nonatomic) NSString *videoExportPreset; // @synthesize videoExportPreset=_videoExportPreset;
@property(nonatomic) _Bool shouldStripAccessibilityDescription; // @synthesize shouldStripAccessibilityDescription=_shouldStripAccessibilityDescription;
@property(nonatomic) _Bool shouldStripCaption; // @synthesize shouldStripCaption=_shouldStripCaption;
@property(nonatomic) _Bool shouldStripLocation; // @synthesize shouldStripLocation=_shouldStripLocation;
@property(nonatomic) _Bool dontAllowRAW; // @synthesize dontAllowRAW=_dontAllowRAW;
@property(nonatomic) _Bool flattenSlomoVideos; // @synthesize flattenSlomoVideos=_flattenSlomoVideos;
@property(nonatomic) _Bool treatLivePhotoAsStill; // @synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill;
@property(nonatomic) long long variant; // @synthesize variant=_variant;
@property(nonatomic) _Bool includeAllAssetResources; // @synthesize includeAllAssetResources=_includeAllAssetResources;
- (id)description;

@end

