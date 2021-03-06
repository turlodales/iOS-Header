//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAsset-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface PXMockDisplayAsset : NSObject <PXDisplayAsset>
{
    NSDictionary *_backingDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
- (long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (id)_stringValueForKey:(id)arg1;
- (id)_dateValueForKey:(id)arg1;
- (double)_doubleValueForKey:(id)arg1;
- (_Bool)_boolValueForKey:(id)arg1;
- (unsigned long long)_unsignedIntegerValueForKey:(id)arg1;
- (long long)_integerValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) float hdrGain;
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;
@property(readonly, nonatomic) NSString *uuid;

@end

