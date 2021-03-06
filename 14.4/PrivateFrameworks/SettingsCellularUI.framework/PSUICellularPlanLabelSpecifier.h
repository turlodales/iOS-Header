//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanLabelSpecifier : PSSpecifier
{
    PSUICellularPlanManagerCache *_planManagerCache;
    PSUICellularPlanUniversalReference *_planReference;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // @synthesize planReference=_planReference;
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
- (id)cellularPlanLabel:(id)arg1;
- (void)updateValuesAndTitles;
- (id)initWithPlanUniversalReference:(id)arg1 planManagerCache:(id)arg2;

@end

