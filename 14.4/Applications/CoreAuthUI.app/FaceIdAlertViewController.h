//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class LAUIPearlGlyphView;

@interface FaceIdAlertViewController : UIAlertController
{
    LAUIPearlGlyphView *_glyph;
}

- (void).cxx_destruct;
- (_Bool)_canShowWhileLocked;
- (int)_preferredStatusBarVisibility;
- (void)dismissWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_shakeTitleLabel;
- (void)shake;
@property(nonatomic) __weak LAUIPearlGlyphView *glyph; // @synthesize glyph=_glyph;

@end

