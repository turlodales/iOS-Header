//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryWriter : NSObject
{
    unsigned long long _urlIndex;
}

- (id)paramCurveControlPointsToArray:(id)arg1;
- (id)paramCurveToDictionary:(id)arg1;
- (id)paramToDictionary:(id)arg1;
- (id)eventParamsToArray:(id)arg1;
- (id)eventToDictionary:(id)arg1 embeddedURLs:(id)arg2;
- (id)patternToDictionary:(id)arg1 events:(id)arg2 parameters:(id)arg3 parameterCurves:(id)arg4 embeddedURLs:(id)arg5;

@end

