//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface PUReviewScreenDoneButton : UIButton
{
    _Bool __needsUpdate;
    unsigned long long _preferredStyle;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (id)doneButton;
@property(nonatomic) _Bool _needsUpdate; // @synthesize _needsUpdate=__needsUpdate;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) unsigned long long preferredStyle; // @synthesize preferredStyle=_preferredStyle;
- (void)_updateIfNeeded;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end

