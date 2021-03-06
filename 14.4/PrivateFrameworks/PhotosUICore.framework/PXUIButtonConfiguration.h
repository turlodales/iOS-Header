//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXUIButtonConfiguration : NSObject
{
    _Bool _allowAnimatedHighlighting;
    long long _cursorEffect;
    struct UIEdgeInsets _hitTestOutset;
}

+ (id)configurationWithCursorEffect:(long long)arg1;
@property(nonatomic) long long cursorEffect; // @synthesize cursorEffect=_cursorEffect;
@property(nonatomic) _Bool allowAnimatedHighlighting; // @synthesize allowAnimatedHighlighting=_allowAnimatedHighlighting;
@property(nonatomic) struct UIEdgeInsets hitTestOutset; // @synthesize hitTestOutset=_hitTestOutset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

