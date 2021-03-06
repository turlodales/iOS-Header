//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TeaUI/TUBarCompressionAnimating-Protocol.h>

@class UIToolbar;

@interface TUToolbarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>
{
    double _topOffset;
    UIToolbar *_toolbar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
- (void)reloadWithTraitCollection:(id)arg1;
@property(readonly, nonatomic) _Bool shouldCloseGapOnScroll;
@property(readonly, nonatomic) _Bool shouldCompressAtTop;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (void)scrollViewIsAtTop:(_Bool)arg1;
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;
- (void)updateWithPercentage:(double)arg1;
- (void)prepareForUpdates;
- (id)initWithToolbar:(id)arg1;

@end

