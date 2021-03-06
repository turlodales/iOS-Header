//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableSet;
@protocol HFMediaProfileContainer;

@interface HUAppleMusicAccountItemProvider : HFItemProvider
{
    NSMutableSet *_items;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    CDUnknownBlockType _filter;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(retain, nonatomic) NSMutableSet *items; // @synthesize items=_items;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)initWithMediaProfileContainer:(id)arg1;

@end

