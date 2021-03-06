//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@interface MLInternalSettings : NSObject <NSSecureCoding>
{
    _Bool _restrictNeuralNetworksToUseCPUOnly;
    _Bool _restrictNeuralNetworksFromUsingANE;
    _Bool _isNeuralNetworkGPUPathForbidden;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)deviceHasANE;
+ (id)globalSettingsFromSettings:(id)arg1;
+ (id)globalSettings;
@property(readonly, nonatomic) _Bool isNeuralNetworkGPUPathForbidden; // @synthesize isNeuralNetworkGPUPathForbidden=_isNeuralNetworkGPUPathForbidden;
@property _Bool restrictNeuralNetworksFromUsingANE; // @synthesize restrictNeuralNetworksFromUsingANE=_restrictNeuralNetworksFromUsingANE;
@property _Bool restrictNeuralNetworksToUseCPUOnly; // @synthesize restrictNeuralNetworksToUseCPUOnly=_restrictNeuralNetworksToUseCPUOnly;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

