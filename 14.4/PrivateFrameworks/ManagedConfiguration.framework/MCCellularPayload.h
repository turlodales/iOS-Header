//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload : MCPayload
{
    MCAPNConfiguration *_attachAPN;
    NSArray *_APNs;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *APNs; // @synthesize APNs=_APNs;
@property(retain, nonatomic) MCAPNConfiguration *attachAPN; // @synthesize attachAPN=_attachAPN;
- (id)installationWarnings;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)APNsDescription;
- (id)APNsLabel;
- (id)APNConfigurationDescription;
- (id)attachAPNConfigurationLabel;
- (id)payloadDescriptionKeyValueSections;
- (id)verboseDescription;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

