//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@protocol CALinearMaskLayerDelegate><CALayerDelegate;

@interface CALinearMaskLayer : CALayer
{
}

+ (id)defaultValueForKey:(id)arg1;
@property struct CGColor *foregroundColor;
- (void)drawInLinearMaskContext:(struct CALinearMaskContext *)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;

// Remaining properties
@property __weak id <CALinearMaskLayerDelegate><CALayerDelegate> delegate; // @dynamic delegate;

@end

