//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync26MapsSyncMutableHistoryItem.h>

@class GEOMapRegion, MISSING_TYPE, NSString;

@interface _TtC8MapsSync32MapsSyncMutableHistorySearchItem : _TtC8MapsSync26MapsSyncMutableHistoryItem
{
    MISSING_TYPE *_proxyHistory;
}

- (void).cxx_destruct;
@property(nonatomic, copy) NSString *query;
@property(nonatomic, copy) NSString *locationDisplay;
@property(nonatomic, copy) NSString *language;
@property(nonatomic, retain) GEOMapRegion *geoMapRegion;
- (id)initWithProxyObject:(id)arg1;

@end

