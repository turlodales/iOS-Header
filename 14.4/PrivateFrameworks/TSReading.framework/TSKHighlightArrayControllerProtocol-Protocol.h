//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSKHighlightArrayController, TSUImage;
@protocol TSKSearchReference;

@protocol TSKHighlightArrayControllerProtocol <NSObject>
- (void)pulseAnimationDidStop:(TSKHighlightArrayController *)arg1;
- (TSUImage *)imageForSearchReference:(id <TSKSearchReference>)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(_Bool)arg3;
- (struct CGPath *)newPathForSearchReference:(id <TSKSearchReference>)arg1;

@optional
- (struct CGRect)rectForSearchReference:(id <TSKSearchReference>)arg1;
@end

