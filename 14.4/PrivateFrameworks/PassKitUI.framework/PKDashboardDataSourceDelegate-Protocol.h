//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSIndexPath, NSIndexSet;
@protocol PKDashboardItem;

@protocol PKDashboardDataSourceDelegate <NSObject>
- (void)updateContent;
- (void)reloadSections:(NSIndexSet *)arg1;
- (void)deleteSections:(NSIndexSet *)arg1;
- (void)insertSections:(NSIndexSet *)arg1;
- (void)performBatchUpdates:(void (^)(void))arg1 completion:(void (^)(_Bool))arg2;
- (void)itemChanged:(id <PKDashboardItem>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)contentIsLoaded;
@end

