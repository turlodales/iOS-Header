//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface ASEnhancedSearchStoreResponse : ASItem
{
    NSString *_store;
    NSNumber *_status;
    NSNumber *_total;
    NSString *_range;
    NSMutableArray *_mResults;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mResults; // @synthesize mResults=_mResults;
@property(copy, nonatomic) NSString *range; // @synthesize range=_range;
@property(copy, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *store; // @synthesize store=_store;
- (void)addResult:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *results;

@end

