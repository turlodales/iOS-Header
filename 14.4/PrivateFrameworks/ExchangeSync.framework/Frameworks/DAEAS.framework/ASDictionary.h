//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/ASParsingAcceptingTopLevelLeaves-Protocol.h>
#import <DAEAS/ASParsingFrontingBasicType-Protocol.h>
#import <DAEAS/ASParsingWithSubItems-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves>
{
    NSMutableDictionary *_items;
    NSDictionary *_subclassRuleSet;
    NSMutableDictionary *_placeHolder;
}

+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
- (id)commonValue;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;
- (void)clearPlaceHolder;
- (void)applyPlaceHolder;
- (void)_setItems:(id)arg1;
- (id)asParseRules;
- (id)description;
- (id)initWithSubclassRuleSet:(id)arg1;

@end

