//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SUPolicyScan.h"

@class SUMDMScanOptions;

@interface SUPolicyScanBrain : SUPolicyScan
{
    SUMDMScanOptions *_mdmScanOption;
}

@property(readonly, retain, nonatomic) SUMDMScanOptions *mdmOptions;
- (_Bool)discretionary;
- (id)assetType;
- (id)initWithScanOptions:(id)arg1;

@end

