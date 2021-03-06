//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class LPImage, NSDate, NSString;

@interface LPApplePhotosMomentMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility>
{
    NSString *_title;
    unsigned long long _photoCount;
    unsigned long long _videoCount;
    unsigned long long _otherItemCount;
    LPImage *_keyPhoto;
    NSDate *_expirationDate;
    NSDate *_earliestAssetDate;
    NSDate *_latestAssetDate;
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *latestAssetDate; // @synthesize latestAssetDate=_latestAssetDate;
@property(copy, nonatomic) NSDate *earliestAssetDate; // @synthesize earliestAssetDate=_earliestAssetDate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) LPImage *keyPhoto; // @synthesize keyPhoto=_keyPhoto;
@property(nonatomic) unsigned long long otherItemCount; // @synthesize otherItemCount=_otherItemCount;
@property(nonatomic) unsigned long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) unsigned long long photoCount; // @synthesize photoCount=_photoCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

