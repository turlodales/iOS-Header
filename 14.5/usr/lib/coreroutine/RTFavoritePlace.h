//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RTMapItem;

@interface RTFavoritePlace : NSObject
{
    NSString *_title;
    RTMapItem *_mapItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (id)initWithTitle:(id)arg1 mapItem:(id)arg2;
- (id)init;

@end

