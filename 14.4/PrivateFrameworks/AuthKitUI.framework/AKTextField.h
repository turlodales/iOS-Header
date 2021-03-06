//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, UIImageView, UILabel, UITextField, UIVisualEffectView;

@interface AKTextField : UIView
{
    _Bool _usesVibrancy;
    UILabel *_entryDescription;
    UITextField *_entryField;
    long long _textFieldStyle;
    long long _rowIdentifier;
    long long _blurEffectStyle;
    UIColor *_fieldBackgroundColor;
    UIVisualEffectView *_visualEffectView;
    UIImageView *_backgroundImageView;
    NSMutableArray *_constraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) UIColor *fieldBackgroundColor; // @synthesize fieldBackgroundColor=_fieldBackgroundColor;
@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(nonatomic) _Bool usesVibrancy; // @synthesize usesVibrancy=_usesVibrancy;
@property(nonatomic) long long rowIdentifier; // @synthesize rowIdentifier=_rowIdentifier;
@property(nonatomic) long long textFieldStyle; // @synthesize textFieldStyle=_textFieldStyle;
@property(readonly, nonatomic) UITextField *entryField; // @synthesize entryField=_entryField;
@property(readonly, nonatomic) UILabel *entryDescription; // @synthesize entryDescription=_entryDescription;
- (id)cachedImageUsingBlock:(CDUnknownBlockType)arg1;
- (void)drawFillForPathRect:(struct CGRect)arg1 roundedCorners:(int)arg2 cornerRadius:(double)arg3;
- (void)drawStrokeForPathRect:(struct CGRect)arg1 roundedCorners:(int)arg2 cornerRadius:(double)arg3 pathSegments:(int)arg4;
- (id)backgroundImage;
- (void)_setupAlertStyleViews;
- (void)_setupInlineEntryStyleViews;
- (void)_setupLabelAndFieldStyles;
- (id)_fieldTextColor;
- (void)_updateFonts:(id)arg1;
- (id)_setupBackgroundViewConstriants;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

