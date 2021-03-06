//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASSqliteCollectionsCursor : NSObject
{
    _Bool _foundOutputRow;
    _Bool _eof;
    id _collection;
}

+ (_Bool)canOrderByKey:(_Bool)arg1;
+ (_Bool)canOrderByRowId:(_Bool)arg1;
+ (_Bool)canOrderByValue:(_Bool)arg1;
+ (id)planningInfoForKeyConstraint:(int)arg1;
+ (id)planningInfoForRowIdConstraint:(int)arg1;
+ (id)planningInfoForValueConstraint:(int)arg1;
+ (double)baseEstimatedCost;
+ (double)baseEstimatedRows;
+ (_Bool)hasKey;
+ (_Bool)hasRowId;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;
- (void).cxx_destruct;
@property(retain, nonatomic) id collection; // @synthesize collection=_collection;
- (void)finalizeConstraints;
- (void)applyKeySort:(_Bool)arg1;
- (void)applyRowIdSort:(_Bool)arg1;
- (void)applyValueSort:(_Bool)arg1;
- (void)applyKeyConstraint:(int)arg1 withArgument:(id)arg2;
- (void)applyRowIdConstraint:(int)arg1 withArgument:(id)arg2;
- (void)applyConstraint:(int)arg1 withArgument:(id)arg2;
- (_Bool)outputEof;
- (id)outputValue;
- (id)outputKey;
- (unsigned long long)outputRowId;
- (void)stepOutputRow;
- (void)stayOnOrStepToOutputRow;
- (_Bool)checkCurrentRow;
- (void)stepIndexedRow;
- (_Bool)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (_Bool)currentIndexEof;
- (id)init;

@end

