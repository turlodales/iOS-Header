//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocation;

@protocol _INPBSearchForPhotosIntentResponse <NSObject>
@property(nonatomic) _Bool hasSearchResultsCount;
@property(nonatomic) int searchResultsCount;
@property(readonly, nonatomic) _Bool hasLocationCreated;
@property(retain, nonatomic) _INPBLocation *locationCreated;
@property(readonly, nonatomic) _Bool hasAlbumName;
@property(copy, nonatomic) NSString *albumName;
@end

