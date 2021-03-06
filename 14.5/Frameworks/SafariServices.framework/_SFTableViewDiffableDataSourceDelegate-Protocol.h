//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, _SFTableViewDiffableDataSource;

@protocol _SFTableViewDiffableDataSourceDelegate <NSObject>

@optional
- (_Bool)dataSource:(_SFTableViewDiffableDataSource *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)dataSource:(_SFTableViewDiffableDataSource *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSArray *)sectionIndexTitlesForDataSource:(_SFTableViewDiffableDataSource *)arg1;
- (NSString *)dataSource:(_SFTableViewDiffableDataSource *)arg1 footerTextForSection:(long long)arg2;
- (NSString *)dataSource:(_SFTableViewDiffableDataSource *)arg1 headerTextForSection:(long long)arg2;
- (void)dataSource:(_SFTableViewDiffableDataSource *)arg1 commitEditingStyle:(long long)arg2 forItemIdentifier:(id)arg3;
@end

