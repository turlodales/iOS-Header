//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerCell : CNLabeledCell
{
    UILabel *_labelLabel;
    UILabel *_valueLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
- (void)tintColorDidChange;
- (id)valueView;
- (id)labelView;
- (void)setText:(id)arg1 detailText:(id)arg2;

@end

