//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol VCRedundancyControllerProtocol;

@protocol VCRedundancyControllerDelegate
- (void)redundancyController:(id <VCRedundancyControllerProtocol>)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id <VCRedundancyControllerProtocol>)arg1 redundancyPercentageDidChange:(unsigned int)arg2;

@optional
- (void)redundancyController:(id <VCRedundancyControllerProtocol>)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;
@end

