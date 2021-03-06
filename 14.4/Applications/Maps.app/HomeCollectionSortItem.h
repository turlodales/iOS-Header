//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsUIDiffableDataSourceIdentifiable-Protocol.h"
#import "SmallDropDownOutlineCellDelegate-Protocol.h"

@class CollectionHandler, NSString;
@protocol HomeCollectionSortItemDelegate;

__attribute__((visibility("hidden")))
@interface HomeCollectionSortItem : NSObject <SmallDropDownOutlineCellDelegate, MapsUIDiffableDataSourceIdentifiable>
{
    CollectionHandler *_collection;
    id <HomeCollectionSortItemDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <HomeCollectionSortItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CollectionHandler *collection; // @synthesize collection=_collection;
- (void)smallDropDownOutlineCell:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)_sortTypes;
- (id)_titleForCollectionSortType:(unsigned long long)arg1;
- (id)cellModelWithBackgroundModel:(id)arg1;
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCollection:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

