//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol _UICollectionCompositionalLayoutSolverResolveResult <NSObject>
@property(readonly, nonatomic) struct CGSize contentSizeAdjustment;
@property(readonly, nonatomic) struct CGPoint contentOffsetAdjustment;
- (NSSet *)indexPathsForDeletedDecorationsForElementKind:(NSString *)arg1;
- (NSSet *)indexPathsForDeletedSupplememtariesForElementKind:(NSString *)arg1;
- (NSSet *)indexPathsForInsertedDecorationsForElementKind:(NSString *)arg1;
- (NSSet *)indexPathsForInsertedSupplememtariesForElementKind:(NSString *)arg1;
@end

