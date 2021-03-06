//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@interface NTKDateComplication : NTKComplication
{
    unsigned long long _dateStyle;
}

+ (_Bool)supportsSecureCoding;
+ (id)complicationWithDateStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (void)_migrateFromSkiHillWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)_generateUniqueIdentifier;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (_Bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(_Bool)arg2;
- (id)ntk_sectionIdentifier;

@end

