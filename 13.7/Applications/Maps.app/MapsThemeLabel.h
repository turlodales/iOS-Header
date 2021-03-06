//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "MapsTheming-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MapsThemeLabel : UILabel <MapsTheming>
{
    CDUnknownBlockType _attributedTextProvider;
    CDUnknownBlockType _textColorProvider;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType textColorProvider; // @synthesize textColorProvider=_textColorProvider;
@property(copy, nonatomic) CDUnknownBlockType attributedTextProvider; // @synthesize attributedTextProvider=_attributedTextProvider;
- (void)_updateTextColor;
- (void)_updateAttributedText;
- (void)updateTheme;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

