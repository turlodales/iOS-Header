//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosFormats/PFCameraAdjustments.h>

@class AVApplePortraitMetadata, NSString;

@interface PFMutableCameraAdjustments : PFCameraAdjustments
{
}

@property(nonatomic) struct CGRect cropRect; // @dynamic cropRect;
@property(nonatomic, getter=isDepthEnabled) _Bool depthEnabled; // @dynamic depthEnabled;
@property(retain, nonatomic) AVApplePortraitMetadata *portraitMetadata; // @dynamic portraitMetadata;
@property(copy, nonatomic) NSString *portraitEffectFilterName; // @dynamic portraitEffectFilterName;
@property(copy, nonatomic) NSString *effectFilterName; // @dynamic effectFilterName;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

