//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/NSObject-Protocol.h>

@class WDSleepDetailSection;

@protocol WDChartDetailViewDataSource <NSObject>
- (WDSleepDetailSection *)mainSection;
- (WDSleepDetailSection *)detailSectionForRow:(long long)arg1 column:(long long)arg2;
- (long long)numberOfColumnsForRow:(long long)arg1;
- (long long)numberOfRows;
@end

