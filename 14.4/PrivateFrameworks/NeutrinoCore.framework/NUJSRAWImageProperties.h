//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSRAWImagePropertiesExport-Protocol.h>

@class NSString, NUJSRAWNoiseReductionProperties;
@protocol NURAWImageProperties;

@interface NUJSRAWImageProperties : NUJSProxy <NUJSRAWImagePropertiesExport>
{
}

@property(readonly) NUJSRAWNoiseReductionProperties *noiseReductionProperties;
@property(readonly) double tint;
@property(readonly) double temperature;
@property(readonly) NSString *decoderVersion;
@property(readonly) id <NURAWImageProperties> rawImageProperties;
- (id)initWithRAWImageProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

