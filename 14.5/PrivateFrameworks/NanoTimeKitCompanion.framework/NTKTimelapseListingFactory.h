//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSMutableSet;

@interface NTKTimelapseListingFactory : NSObject
{
    CLKDevice *_device;
    NSMutableSet *_assetListings;
}

+ (id)sharedInstanceForDevice:(id)arg1;
- (void).cxx_destruct;
- (void)discardAssets;
- (void)setTimelapseListingHasAssets:(id)arg1;
- (id)posterImageWithTheme:(unsigned long long)arg1;
- (id)heroImageWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D)arg3;
- (id)listingWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D)arg3;
- (id)_initLibraryForDevice:(id)arg1;

@end

