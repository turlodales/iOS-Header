//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKPaletteAttributeViewController.h>

#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PencilKit/_PKInkAttributesPickerViewDelegate-Protocol.h>

@class NSString, PKInk, _PKInkAttributesPickerView;
@protocol PKInkAttributesPickerDelegate;

@interface PKInkAttributesPicker : PKPaletteAttributeViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate>
{
    _Bool _updatingOpacityValue;
    id <PKInkAttributesPickerDelegate> _delegate;
    _PKInkAttributesPickerView *_pickerView;
    double _minimumOpacityValue;
}

+ (double)defaultMinimumOpacityValue;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isUpdatingOpacityValue) _Bool updatingOpacityValue; // @synthesize updatingOpacityValue=_updatingOpacityValue;
@property(nonatomic) double minimumOpacityValue; // @synthesize minimumOpacityValue=_minimumOpacityValue;
@property(retain, nonatomic) _PKInkAttributesPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) id <PKInkAttributesPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)arg1;
- (void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)arg1;
- (void)inkAttributesPickerViewDidChangeInkOpacity:(id)arg1;
- (void)inkAttributesPickerViewDidChangeInkThickness:(id)arg1;
- (void)_notifyInkAttributesPickerDidChangeInk;
@property(nonatomic) unsigned long long displayMode;
- (void)setSelectedInk:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) PKInk *selectedInk;
- (void)_updateUI;
@property(nonatomic) long long colorUserInterfaceStyle;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)initWithInk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

