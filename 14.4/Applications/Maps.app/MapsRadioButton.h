//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface MapsRadioButton : UIControl
{
    UIButton *_button;
    int _controlSize;
    id <NSObject><NSCopying> _groupIdentifier;
}

+ (id)buttonWithGroupIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int controlSize; // @synthesize controlSize=_controlSize;
@property(copy, nonatomic) id <NSObject><NSCopying> groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)sizingLength;
- (void)_buttonTapped:(id)arg1;
- (void)_otherButtonDidChange:(id)arg1;
@property(nonatomic, getter=isSelected) _Bool selected;
- (id)initWithFrame:(struct CGRect)arg1;

@end

