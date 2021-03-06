//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUIPattern : NSObject
{
    struct CGImage *_patternImage;
    struct CGPattern *_pattern;
    double _alpha;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (struct CGImage *)patternImageRef;
- (id)description;
- (void)setPatternInContext:(struct CGContext *)arg1;
- (struct CGPattern *)pattern;
- (struct CGPattern *)_newPattern;
- (void)dealloc;
- (id)initWithImageRef:(struct CGImage *)arg1;

@end

