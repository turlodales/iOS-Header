//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HMHomeManager *_homeManager;
    NSMutableSet *_homeItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *homeItems; // @synthesize homeItems=_homeItems;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithHomeManager:(id)arg1;

@end

