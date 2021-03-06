//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaEntity.h>

@class MPMediaItem, MPMediaQuery, NSArray;

@interface MPMediaItemCollection : MPMediaEntity
{
    unsigned long long _containedMediaTypes;
    _Bool _initializedContainedMediaTypes;
    NSArray *_items;
    unsigned long long _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}

+ (id)representativePersistentIDPropertyForGroupingType:(long long)arg1;
+ (id)sortTitlePropertyForGroupingType:(long long)arg1;
+ (id)titlePropertyForGroupingType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)collectionWithItems:(id)arg1;
+ (id)artworkCatalogCachePropertiesForGroupingType:(long long)arg1;
- (void).cxx_destruct;
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)multiverseIdentifier;
@property(readonly, nonatomic) long long groupingType;
@property(readonly, nonatomic) unsigned long long mediaTypes;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) MPMediaItem *representativeItem;
@property(readonly, nonatomic) NSArray *items;
- (id)itemsQuery;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (id)initWithItemsQuery:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)_artworkCatalogRepresentativeItem;
- (id)artistArtworkCatalog;
- (id)albumArtistArtworkCatalog;
- (id)artworkCatalog;
- (_Bool)MPSD_hasDownloadingItem;
- (_Bool)MPSD_hasDownloadableItem;

@end

