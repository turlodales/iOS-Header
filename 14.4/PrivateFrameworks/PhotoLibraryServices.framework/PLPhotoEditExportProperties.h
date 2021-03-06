//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoEditExportProperties : NSObject
{
    long long _baseEXIFOrientation;
    double _baseDuration;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
}

+ (id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 duration:(double)arg4;
+ (id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3;
@property(readonly, nonatomic) unsigned long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, nonatomic) unsigned long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(readonly, nonatomic) double baseDuration; // @synthesize baseDuration=_baseDuration;
@property(readonly, nonatomic) long long baseEXIFOrientation; // @synthesize baseEXIFOrientation=_baseEXIFOrientation;

@end

