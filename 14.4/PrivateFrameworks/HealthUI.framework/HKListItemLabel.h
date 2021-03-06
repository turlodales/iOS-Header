//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface HKListItemLabel : UIView
{
    _Bool _centerItemViewToFirstLine;
    _Bool _boldText;
    UIView *_itemView;
    UILabel *_textLabel;
    NSString *_text;
    NSLayoutConstraint *_itemViewTextAlignmentConstraint;
    NSLayoutConstraint *_topToTextLabelFirstBaselineConstraint;
    struct CGSize _itemViewSize;
}

+ (id)createListItem:(id)arg1 itemNumber:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *topToTextLabelFirstBaselineConstraint; // @synthesize topToTextLabelFirstBaselineConstraint=_topToTextLabelFirstBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *itemViewTextAlignmentConstraint; // @synthesize itemViewTextAlignmentConstraint=_itemViewTextAlignmentConstraint;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct CGSize itemViewSize; // @synthesize itemViewSize=_itemViewSize;
@property(nonatomic) _Bool boldText; // @synthesize boldText=_boldText;
@property(nonatomic) _Bool centerItemViewToFirstLine; // @synthesize centerItemViewToFirstLine=_centerItemViewToFirstLine;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *itemView; // @synthesize itemView=_itemView;
- (double)_textLabelLastBaselineToBottom;
- (double)_topToTextLabelFirstBaseline;
- (id)_textLabelBoldFont;
- (id)_textLabelFont;
- (id)_textLabelFontStyle;
- (void)_updateItemViewTextAlignmentConstraint;
- (void)_updateTextLabelFont;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithView:(id)arg1 size:(struct CGSize)arg2 text:(id)arg3;

@end

