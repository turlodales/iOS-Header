//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSSPropertyMap;

@interface TSCHConfiguration : NSObject
{
    _Bool mSupportsChartDataEditor;
    _Bool mSupportsChartRangeEditingMode;
    _Bool mSupportsNumberFormatSameAsSource;
    _Bool mShowMessageOnSelection;
    _Bool mDisableHighQualityRenderingIfNecessary;
    _Bool mSupports3DFillDataEmbeddingRecovery;
    _Bool mUse3DFillFor3DChartFallback;
    _Bool mShouldForceDiscreteGraphicsFor3D;
    _Bool mExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
    _Bool mSupportsTextBackground;
    _Bool mSupportsTextWrapping;
    Class mMultiDataChartOptionsControllerBuildSupportClass;
    NSString *mModifyChartDataHelpKey;
    long long _analyticsAppType;
}

+ (void)resetSharedChartConfiguration;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedChartConfiguration;
+ (id)_singletonAlloc;
- (void).cxx_destruct;
@property(nonatomic) long long analyticsAppType; // @synthesize analyticsAppType=_analyticsAppType;
@property(copy, nonatomic) NSString *modifyChartDataHelpKey; // @synthesize modifyChartDataHelpKey=mModifyChartDataHelpKey;
@property(retain, nonatomic) Class multiDataChartOptionsControllerBuildSupportClass; // @synthesize multiDataChartOptionsControllerBuildSupportClass=mMultiDataChartOptionsControllerBuildSupportClass;
@property(nonatomic) _Bool supportsTextWrapping; // @synthesize supportsTextWrapping=mSupportsTextWrapping;
@property(nonatomic) _Bool supportsTextBackground; // @synthesize supportsTextBackground=mSupportsTextBackground;
@property(nonatomic) _Bool exportsUsingSageKeynoteChartNonStyleDefaultsOverride; // @synthesize exportsUsingSageKeynoteChartNonStyleDefaultsOverride=mExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
@property(nonatomic) _Bool shouldForceDiscreteGraphicsFor3D; // @synthesize shouldForceDiscreteGraphicsFor3D=mShouldForceDiscreteGraphicsFor3D;
@property(nonatomic) _Bool use3DFillFor3DChartFallback; // @synthesize use3DFillFor3DChartFallback=mUse3DFillFor3DChartFallback;
@property(nonatomic) _Bool supports3DFillDataEmbeddingRecovery; // @synthesize supports3DFillDataEmbeddingRecovery=mSupports3DFillDataEmbeddingRecovery;
@property(nonatomic) _Bool disableHighQualityRenderingIfNecessary; // @synthesize disableHighQualityRenderingIfNecessary=mDisableHighQualityRenderingIfNecessary;
@property(nonatomic) _Bool showMessageOnSelection; // @synthesize showMessageOnSelection=mShowMessageOnSelection;
@property(nonatomic) _Bool supportsNumberFormatSameAsSource; // @synthesize supportsNumberFormatSameAsSource=mSupportsNumberFormatSameAsSource;
@property(nonatomic) _Bool supportsChartRangeEditingMode; // @synthesize supportsChartRangeEditingMode=mSupportsChartRangeEditingMode;
@property(nonatomic) _Bool supportsChartDataEditor; // @synthesize supportsChartDataEditor=mSupportsChartDataEditor;
@property(readonly) TSSPropertyMap *appSpecificPropertyOverrides;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

