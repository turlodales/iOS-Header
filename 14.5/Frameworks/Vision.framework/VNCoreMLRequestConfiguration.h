//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration
{
    unsigned long long _imageCropAndScaleOption;
    id <NSObject><NSCopying> _modelCachingIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <NSObject><NSCopying> modelCachingIdentifier; // @synthesize modelCachingIdentifier=_modelCachingIdentifier;
@property(nonatomic) unsigned long long imageCropAndScaleOption; // @synthesize imageCropAndScaleOption=_imageCropAndScaleOption;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithPropertiesOfModel:(id)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

