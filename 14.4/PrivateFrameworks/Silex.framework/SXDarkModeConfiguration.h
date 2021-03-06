//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDarkModeConfiguration-Protocol.h>

@class NSDictionary, NSString;

@interface SXDarkModeConfiguration : NSObject <SXDarkModeConfiguration>
{
    _Bool _autoDarkModeEnabled;
    unsigned long long _inversionBehavior;
    double _saturationThreshold;
    NSDictionary *_colors;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) double saturationThreshold; // @synthesize saturationThreshold=_saturationThreshold;
@property(readonly, nonatomic) unsigned long long inversionBehavior; // @synthesize inversionBehavior=_inversionBehavior;
@property(readonly, nonatomic, getter=isAutoDarkModeEnabled) _Bool autoDarkModeEnabled; // @synthesize autoDarkModeEnabled=_autoDarkModeEnabled;
- (id)initWithAutoDarkModeEnabled:(_Bool)arg1 inversionBehavior:(unsigned long long)arg2 saturationThreshold:(double)arg3 colors:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

