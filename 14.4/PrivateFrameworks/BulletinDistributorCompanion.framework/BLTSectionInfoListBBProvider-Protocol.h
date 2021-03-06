//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSectionInfoListProvider-Protocol.h>

@class BLTSectionInfoItem, NSString;
@protocol BLTSectionInfoListProviderDelegate;

@protocol BLTSectionInfoListBBProvider <BLTSectionInfoListProvider>
@property(nonatomic) __weak id <BLTSectionInfoListProviderDelegate> delegate;
- (BLTSectionInfoItem *)sectionInfoForSectionID:(NSString *)arg1;
- (void)reloadSection:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)reloadWithCompletion:(void (^)(NSArray *))arg1;
@end

