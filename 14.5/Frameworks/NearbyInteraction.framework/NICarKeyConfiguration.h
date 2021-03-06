//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearbyInteraction/NIConfiguration.h>

@class NSDictionary, NSString;

@interface NICarKeyConfiguration : NIConfiguration
{
    long long _configurationTypeInternal;
    NSString *_vehicleIdentifier;
    NSDictionary *_debugOptions;
}

+ (_Bool)supportsSecureCoding;
+ (id)_vehicleSimConfigurationWithOptions:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSDictionary *debugOptions; // @synthesize debugOptions=_debugOptions;
@property(copy) NSString *vehicleIdentifier; // @synthesize vehicleIdentifier=_vehicleIdentifier;
- (id)descriptionInternal;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) long long configurationType;
- (id)initWithConfiguration:(id)arg1;
- (id)initVehicleSimConfiguration:(id)arg1;
- (id)initWithVehicleIdentifier:(id)arg1;

@end

