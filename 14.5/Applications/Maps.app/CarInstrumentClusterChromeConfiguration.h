//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CarInstrumentClusterChromeConfiguration : NSObject
{
    unsigned long long _showsHeadingIndicator;
    unsigned long long _showsSpeedLimit;
    unsigned long long _showsCards;
}

@property(readonly, nonatomic) unsigned long long showsCards; // @synthesize showsCards=_showsCards;
@property(readonly, nonatomic) unsigned long long showsSpeedLimit; // @synthesize showsSpeedLimit=_showsSpeedLimit;
@property(readonly, nonatomic) unsigned long long showsHeadingIndicator; // @synthesize showsHeadingIndicator=_showsHeadingIndicator;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInstrumentClusterSceneSettings:(id)arg1;

@end

