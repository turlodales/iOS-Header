//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@class CLKComplicationDescriptor, NSString;

@interface NTKRemoteComplication : NTKComplication
{
    NSString *_clientIdentifier;
    NSString *_appBundleIdentifier;
    CLKComplicationDescriptor *_complicationDescriptor;
}

+ (_Bool)supportsSecureCoding;
+ (id)_remoteStocksComplicationForDevice:(id)arg1;
+ (id)remoteStocksComplicationDescriptorForDevice:(id)arg1;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)complicationWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 complicationDescriptor:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor; // @synthesize complicationDescriptor=_complicationDescriptor;
@property(readonly, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (_Bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)description;
- (id)localizedRichDetailText;
- (id)localizedDetailText;
- (id)localizedRichKeylineLabelText;
- (id)companionLocalizedKeylineLabelText;
- (id)watchLocalizedKeylineLabelText;
- (void)resetComplicationDescriptor;
- (id)localizedKeylineLabelText;
- (id)appIdentifier;
- (id)_generatUniqueIdentifier;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(_Bool)arg2;

@end

