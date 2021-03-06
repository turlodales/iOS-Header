//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDChart, CHDFormula, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTitle : NSObject
{
    CHDChart *mChart;
    _Bool mIsAutoGenerated;
    _Bool mPositionAutoGenerated;
    _Bool mSizeAutoGenerated;
    _Bool mIsOverlay;
    CHDFormula *mName;
    EDString *mLastCachedName;
    OADGraphicProperties *mGraphicProperties;
    double mRotation;
}

- (void).cxx_destruct;
- (id)description;
- (void)setTitleRotationAngle:(double)arg1;
- (double)titleRotationAngle;
- (void)setIsOverlay:(_Bool)arg1;
- (_Bool)isOverlay;
- (_Bool)isTitleVisible;
- (_Bool)isCachedTitleEmpty;
- (void)setIsSizeAutoGenerated:(_Bool)arg1;
- (_Bool)isAutoSizeAndPosition;
- (_Bool)isSizeAutoGenerated;
- (void)setIsPositionAutoGenerated:(_Bool)arg1;
- (_Bool)isPositionAutoGenerated;
- (void)setIsAutoGenerated:(_Bool)arg1;
- (_Bool)isAutoGenerated;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setName:(id)arg1;
- (id)name;
- (void)setLastCachedName:(id)arg1;
- (id)lastCachedName;
- (id)initWithChart:(id)arg1;

@end

