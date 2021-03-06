//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXMutableImageLayerModulator_Private-Protocol.h>

@class CAFilter, CALayer, NSString, PXGainMapAnimationDurationFilter;

@interface PXImageLayerModulator : NSObject <PXMutableImageLayerModulator_Private>
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool filterInput;
        _Bool filter;
        _Bool filteredLayer;
        _Bool displayingVideoComplement;
        _Bool filterIntensity;
        _Bool gainMapVisibility;
        _Bool gainMapAppearance;
    } _needsUpdateFlags;
    _Bool _displayingVideoComplement;
    _Bool _revealsGainMapImage;
    _Bool _animateGainMapAppearance;
    _Bool _enabled;
    float _gainMapValue;
    float _hdrGain;
    CALayer *_layer;
    struct CGImage *_gainMapImage;
    long long _filterType;
    CAFilter *_filter;
    NSString *_layerFilterIntensityKeyPath;
    CALayer *_filteredLayer;
    CALayer *_gainMapLayer;
    PXGainMapAnimationDurationFilter *_gainMapAnimationDurationFilter;
    double _intensityAnimationDuration;
    double _intensity;
    CDStruct_0b45e515 _options;
}

+ (struct CGImage *)_gainMapPlaceholderImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double intensityAnimationDuration; // @synthesize intensityAnimationDuration=_intensityAnimationDuration;
@property(retain, nonatomic) PXGainMapAnimationDurationFilter *gainMapAnimationDurationFilter; // @synthesize gainMapAnimationDurationFilter=_gainMapAnimationDurationFilter;
@property(nonatomic) _Bool animateGainMapAppearance; // @synthesize animateGainMapAppearance=_animateGainMapAppearance;
@property(retain, nonatomic) CALayer *gainMapLayer; // @synthesize gainMapLayer=_gainMapLayer;
@property(retain, nonatomic) CALayer *filteredLayer; // @synthesize filteredLayer=_filteredLayer;
@property(retain, nonatomic) NSString *layerFilterIntensityKeyPath; // @synthesize layerFilterIntensityKeyPath=_layerFilterIntensityKeyPath;
@property(readonly, nonatomic) CAFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) float hdrGain; // @synthesize hdrGain=_hdrGain;
@property(readonly, nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) CDStruct_0b45e515 options; // @synthesize options=_options;
@property(readonly, nonatomic) _Bool revealsGainMapImage; // @synthesize revealsGainMapImage=_revealsGainMapImage;
@property(readonly, nonatomic) float gainMapValue; // @synthesize gainMapValue=_gainMapValue;
@property(readonly, nonatomic) struct CGImage *gainMapImage; // @synthesize gainMapImage=_gainMapImage;
@property(readonly, nonatomic, getter=isDisplayingVideoComplement) _Bool displayingVideoComplement; // @synthesize displayingVideoComplement=_displayingVideoComplement;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void)_updateGainMapVisibility;
- (void)_invalidateGainMapVisibility;
- (void)_updateGainMapAppearance;
- (void)_invalidateGainMapAppearance;
- (void)_updateFilterIntensityIfNeeded;
- (void)_invalidateFilterIntensity;
- (void)_updateFilteredLayerIfNeeded;
- (void)_invalidateFilteredLayer;
- (void)_updateFilter;
- (void)_invalidateFilter;
- (void)_updateFilterInput;
- (void)_invalidateFilterInput;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)performChanges_Private:(CDUnknownBlockType)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (void)animateChangesWithDuration:(double)arg1;
- (void)setRevealsGainMapImage:(_Bool)arg1;
- (void)setGainMapImage:(struct CGImage *)arg1;
- (void)setGainMapImage:(struct CGImage *)arg1 animated:(_Bool)arg2;
- (void)setDisplayingVideoComplement:(_Bool)arg1;
- (void)setIntensity:(double)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_removeFilterFromLayer:(id)arg1;
- (void)_addFilterToLayer:(id)arg1;
- (void)removeFilterFromUnownedLayer:(id)arg1;
- (void)setGainMapValue:(float)arg1;
- (void)setHdrGain:(float)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setFilter:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)dealloc;
- (id)initWithOptions:(CDStruct_0b45e515)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

