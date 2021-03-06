//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject
{
    MDLTexture *texture;
    MDLTextureFilter *hardwareFilter;
    MDLTransform *transform;
    unsigned long long mappingChannel;
    long long textureComponents;
}

- (void).cxx_destruct;
@property(nonatomic) long long textureComponents; // @synthesize textureComponents;
@property(nonatomic) unsigned long long mappingChannel; // @synthesize mappingChannel;
@property(retain, nonatomic) MDLTransform *transform; // @synthesize transform;
@property(retain, nonatomic) MDLTextureFilter *hardwareFilter; // @synthesize hardwareFilter;
@property(retain, nonatomic) MDLTexture *texture; // @synthesize texture;
- (id)init;

@end

