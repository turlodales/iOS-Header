//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSDate, NSString;

@interface MPModelGenre : MPModelObject
{
}

+ (id)__libraryAddedDate_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__name_KEY;
+ (id)kindWithAlbumKind:(id)arg1;
- (id)artworkCatalog;
- (id)humanDescription;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @dynamic libraryAddedDate;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

