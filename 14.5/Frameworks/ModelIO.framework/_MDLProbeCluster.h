//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableSet;

@interface _MDLProbeCluster : NSObject
{
    NSMutableSet *_probes;
    MISSING_TYPE *_centroid;
}

- (void).cxx_destruct;
@property(retain) NSMutableSet *probes; // @synthesize probes=_probes;
@property MISSING_TYPE *centroid; // @synthesize centroid=_centroid;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCluster:(id)arg1;
- (_Bool)isEmpty;

@end

