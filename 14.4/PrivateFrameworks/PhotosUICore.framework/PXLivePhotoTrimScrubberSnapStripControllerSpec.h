//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PXLivePhotoTrimScrubberSnapStripControllerSpec : NSObject
{
    _Bool _alwaysShowKeyTime;
    _Bool _showDefaultKeyTime;
    UIColor *_disabledColor;
    UIColor *_currentPositionMarkerColor;
    UIColor *_originalPositionMarkerColor;
    UIColor *_suggestedMarkerColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showDefaultKeyTime; // @synthesize showDefaultKeyTime=_showDefaultKeyTime;
@property(nonatomic) _Bool alwaysShowKeyTime; // @synthesize alwaysShowKeyTime=_alwaysShowKeyTime;
@property(retain, nonatomic) UIColor *suggestedMarkerColor; // @synthesize suggestedMarkerColor=_suggestedMarkerColor;
@property(retain, nonatomic) UIColor *originalPositionMarkerColor; // @synthesize originalPositionMarkerColor=_originalPositionMarkerColor;
@property(retain, nonatomic) UIColor *currentPositionMarkerColor; // @synthesize currentPositionMarkerColor=_currentPositionMarkerColor;
@property(retain, nonatomic) UIColor *disabledColor; // @synthesize disabledColor=_disabledColor;
- (id)init;

@end

