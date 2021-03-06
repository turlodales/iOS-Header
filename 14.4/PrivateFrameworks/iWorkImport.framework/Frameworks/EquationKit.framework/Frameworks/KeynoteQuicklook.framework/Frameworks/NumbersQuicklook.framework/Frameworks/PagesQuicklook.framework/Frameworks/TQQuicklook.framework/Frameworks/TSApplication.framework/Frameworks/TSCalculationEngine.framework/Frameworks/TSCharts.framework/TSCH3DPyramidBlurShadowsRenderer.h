//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCH3DShadowsRenderer-Protocol.h>

@class NSArray, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer>
{
    NSArray *mPyramidResources;
    TSCH3DPyramidBlurFBOResource *mFinalShadowResource;
    tvec2_3b141483 mInitialSize;
    int mRequestedSize;
    float mTargetRadiusFactor;
}

- (id).cxx_construct;
- (id)shadowsFBOForContext:(id)arg1;
- (float)blurSlackForQuality:(float)arg1;
- (void)invalidate;
- (void)unprotectShadowInSession:(id)arg1;
- (void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(CDUnknownBlockType)arg3;
- (id)p_allResources;
- (void)p_setupResourcesForSize:(tvec2_3b141483)arg1;
- (void)dealloc;
- (id)initWithSize:(int)arg1 targetRadiusFactor:(float)arg2;

@end

