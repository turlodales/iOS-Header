//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPhotoInfoSource-Protocol.h>

@class GEOAMPPhotoInfoProvider, GEODefaultPhotoInfoProvider, NSArray, NSString;
@protocol GEOPhotoInfoProvider;

__attribute__((visibility("hidden")))
@interface GEOPhotoInfoSource : NSObject <GEOPhotoInfoSource>
{
    NSArray *_originalPhotoContent;
    GEOAMPPhotoInfoProvider *_ampPhotoInfoProvider;
    GEODefaultPhotoInfoProvider *_defaultPhotoInfoProvider;
}

- (void).cxx_destruct;
- (id)largestPhoto;
- (double)sizeRatio;
- (id)bestPhotoForSize:(struct CGSize)arg1 options:(id)arg2;
@property(readonly, nonatomic) NSArray *allPhotoInfoProviders;
@property(readonly, nonatomic) id <GEOPhotoInfoProvider> principalPhotoInfoProvider;
- (id)initWithPhotoContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

