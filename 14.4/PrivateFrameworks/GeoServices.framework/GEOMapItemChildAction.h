//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemChildActionSearch;

@interface GEOMapItemChildAction : NSObject
{
    long long _childActionType;
    GEOMapItemChildActionSearch *_childActionSearch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOMapItemChildActionSearch *childActionSearch; // @synthesize childActionSearch=_childActionSearch;
@property(nonatomic) long long childActionType; // @synthesize childActionType=_childActionType;
- (id)initWithChildAction:(id)arg1;

@end

