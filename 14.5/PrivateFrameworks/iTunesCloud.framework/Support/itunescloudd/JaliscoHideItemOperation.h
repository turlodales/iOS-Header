//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSArray;

@interface JaliscoHideItemOperation : CloudLibraryOperation
{
    NSArray *_itemPurchaseHistoryIDs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)main;
- (_Bool)isPersistent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 itemPurchaseHistoryIDs:(id)arg2;
- (id)initWithItemPurchaseHistoryIDs:(id)arg1;

@end

