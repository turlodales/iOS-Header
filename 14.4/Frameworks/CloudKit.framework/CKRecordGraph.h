//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CKRecordGraph : NSObject
{
    NSMutableArray *_nodes;
    NSArray *_sortedRecords;
}

+ (id)topologicallySortRecords:(id)arg1 withError:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sortedRecords; // @synthesize sortedRecords=_sortedRecords;
@property(retain, nonatomic) NSMutableArray *nodes; // @synthesize nodes=_nodes;
- (id)description;
- (id)recordsByTopologicalSortWithError:(id *)arg1;
- (id)init;
- (_Bool)addRecords:(id)arg1 error:(id *)arg2;

@end

