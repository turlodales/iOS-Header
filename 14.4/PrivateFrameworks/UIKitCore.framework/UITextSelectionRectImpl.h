//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextSelectionRect.h>

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface UITextSelectionRectImpl : UITextSelectionRect
{
    WebSelectionRect *webRect;
}

+ (id)rectsWithWebRects:(id)arg1;
+ (id)rectWithWebRect:(id)arg1;
@property(retain, nonatomic) WebSelectionRect *webRect; // @synthesize webRect;
- (_Bool)isVertical;
- (_Bool)containsEnd;
- (_Bool)containsStart;
- (id)range;
- (long long)writingDirection;
- (struct CGRect)rect;
- (void)dealloc;
- (id)initWithWebRect:(id)arg1;

@end

