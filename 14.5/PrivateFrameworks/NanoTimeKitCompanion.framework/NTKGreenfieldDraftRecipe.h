//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString, NTKFace;

@interface NTKGreenfieldDraftRecipe : NSObject <NSSecureCoding>
{
    NTKFace *_originalface;
    NSMutableDictionary *_slotToSampleTemplateMapping;
    NSMutableDictionary *_slotToItemIdMapping;
    NSMutableDictionary *_complicationUniqueIdentifierToOptionTypeMapping;
    NSMutableDictionary *_slotToAppIdentifierMapping;
    NSString *_tempPathOverride;
}

+ (_Bool)supportsSecureCoding;
+ (id)templateForComplicationAtSlot:(id)arg1 face:(id)arg2;
+ (id)descriptionFromComplicationOption:(unsigned long long)arg1;
+ (id)titleFromComplicationOption:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tempPathOverride; // @synthesize tempPathOverride=_tempPathOverride;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_buildOptionTypeMapping;
- (void)_buildSlotToItemIdAndBundleIdMapping;
- (_Bool)canShareTemplate:(id)arg1 slot:(id)arg2;
- (void)_buildSlotToSampleTemplateMapping;
- (_Bool)_shouldIncludeMetadataForSlot:(id)arg1;
@property(readonly, nonatomic) NTKFace *faceForSharing;
- (id)sortedComplicationSharingOptions;
- (id)slotToBundleIdMapping;
- (id)slotToSampleTemplateMapping;
- (id)slotToItemIdMapping;
@property(readonly, nonatomic) _Bool hasComplicationSharingOptions;
- (unsigned long long)optionForComplicationUniqueIdentifier:(id)arg1;
- (void)setComplicationOption:(unsigned long long)arg1 forComplicationUniqueIdentifier:(id)arg2;
- (id)initWithFace:(id)arg1;

@end

