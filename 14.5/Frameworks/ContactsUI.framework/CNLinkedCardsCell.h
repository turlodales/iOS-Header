//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNLinkedCardsCell : CNLabeledCell
{
    id <CNPropertyCellDelegate> _delegate;
    UILabel *_sourceLabel;
    UILabel *_nameLabel;
}

+ (_Bool)wantsChevron;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConstraints;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (id)valueView;
- (id)labelView;

@end

