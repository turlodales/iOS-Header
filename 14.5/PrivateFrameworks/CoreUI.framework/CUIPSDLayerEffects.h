//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject
{
    _Bool _visible;
    double _effectScale;
    NSMutableDictionary *_effectList;
}

@property(retain) NSMutableDictionary *effectList; // @synthesize effectList=_effectList;
@property double effectScale; // @synthesize effectScale=_effectScale;
@property _Bool visible; // @synthesize visible=_visible;
- (void)dealloc;
- (void)addLayerEffectComponent:(id)arg1;
- (id)colorOverlay;
- (id)dropShadow;
- (id)init;

@end

