//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemPhotoInfo-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataPhotoInfo : NSObject <GEOMapItemPhotoInfo>
{
    NSURL *_url;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 width:(double)arg2 height:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

