//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class CNCardActionGroupItem, CNContactAction, CNTransportButton, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactActionCell : CNLabeledCell
{
    UILabel *_label;
    CNTransportButton *_transportIcon;
}

+ (_Bool)shouldIndentWhileEditing;
- (void).cxx_destruct;
@property(retain, nonatomic) CNTransportButton *transportIcon; // @synthesize transportIcon=_transportIcon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)tintColorDidChange;
- (id)variableConstraints;
@property(readonly, nonatomic) CNContactAction *action;
@property(readonly, nonatomic) CNCardActionGroupItem *actionGroupItem;
- (void)setCardGroupItem:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (id)rightMostView;
- (_Bool)shouldPerformDefaultAction;
- (double)minCellHeight;
- (id)labelView;

@end

