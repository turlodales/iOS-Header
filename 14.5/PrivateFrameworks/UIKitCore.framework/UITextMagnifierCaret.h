//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextMagnifier.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UITextMagnifier
{
    double _yOffset;
    struct CGPoint _offset;
}

+ (Class)renderClass;
+ (id)activeCaretMagnifier;
+ (id)sharedCaretMagnifier;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (double)offsetFromMagnificationPoint;
- (_Bool)isHorizontal;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;
- (void)updateFrameAndOffset;
- (void)remove;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;
- (_Bool)terminalPointPlacedCarefully;
- (void)setAnimationPoint:(struct CGPoint)arg1;
- (struct CGPoint)animationPoint;
- (id)initWithFrame;

@end

