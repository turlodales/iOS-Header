//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class NSString, REFeatureMap;

@interface REMLElement : NSObject <REAutomaticExportedInterface, NSCopying>
{
    NSString *_identifier;
    REFeatureMap *_featureMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) REFeatureMap *featureMap; // @synthesize featureMap=_featureMap;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 featureMap:(id)arg2;

@end

