//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPNamedEntityRecord.h>

@class NSString, PPNamedEntity, PPNamedEntityMetadata, PPSource;

@interface PPMutableNamedEntityRecord : PPNamedEntityRecord
{
}

@property(retain, nonatomic) PPNamedEntityMetadata *metadata; // @dynamic metadata;
@property(nonatomic) double sentimentScore; // @dynamic sentimentScore;
@property(nonatomic) unsigned char changeType; // @dynamic changeType;
@property(nonatomic) unsigned int extractionAssetVersion; // @dynamic extractionAssetVersion;
@property(retain, nonatomic) NSString *extractionOsBuild; // @dynamic extractionOsBuild;
@property(nonatomic) double decayRate; // @dynamic decayRate;
@property(nonatomic) double initialScore; // @dynamic initialScore;
@property(nonatomic) unsigned long long algorithm; // @dynamic algorithm;
@property(retain, nonatomic) PPSource *source; // @dynamic source;
@property(retain, nonatomic) PPNamedEntity *entity; // @dynamic entity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

