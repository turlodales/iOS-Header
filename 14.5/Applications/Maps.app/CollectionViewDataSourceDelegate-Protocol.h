//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexSet;
@protocol UICollectionViewDataSource;

@protocol CollectionViewDataSourceDelegate <NSObject>
- (void)dataSource:(id <UICollectionViewDataSource>)arg1 requiresDeletionOfIndexSet:(NSIndexSet *)arg2 reloadOfIndexSet:(NSIndexSet *)arg3 insertionOfIndexSet:(NSIndexSet *)arg4;
- (void)dataSource:(id <UICollectionViewDataSource>)arg1 requiresReloadOfSection:(unsigned long long)arg2;
- (void)dataSourceRequiresReload:(id <UICollectionViewDataSource>)arg1;
@end

