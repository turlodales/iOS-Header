//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMediaSelectionOption, NSString;

__attribute__((visibility("hidden")))
@interface MPAlternateTrack : NSObject
{
    NSString *_displayName;
    NSString *_canonicalLanguageIdentifier;
    AVMediaSelectionOption *_option;
    _Bool _isMainProgram;
    _Bool _isDVS;
}

+ (id)threeCharCodesForEncodedISO639_2_T:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDVS; // @synthesize isDVS=_isDVS;
@property(readonly, nonatomic) _Bool isMainProgram; // @synthesize isMainProgram=_isMainProgram;
@property(readonly, nonatomic) AVMediaSelectionOption *option; // @synthesize option=_option;
@property(readonly, nonatomic) NSString *canonicalLanguageIdentifier; // @synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)_setDisplayNameFromOption:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithOption:(id)arg1;

@end

