//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexSet, NSOrderedCollectionDifference, NSSet;

@protocol _UIIdentifierDiffer <NSObject>
@property(readonly, nonatomic) NSOrderedCollectionDifference *collectionDifference;
@property(readonly, nonatomic) _Bool hasChanges;
@property(readonly, nonatomic) NSSet *movePairs;
@property(readonly, nonatomic) NSIndexSet *deletedIndexes;
@property(readonly, nonatomic) NSIndexSet *insertedIndexes;
@end

