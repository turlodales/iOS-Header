//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUICellLayout.h>

#import <StoreKitUI/SKUIEditorialLinkViewDelegate-Protocol.h>

@class NSString, SKUIEditorialLinkView, SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate>
{
    struct UIEdgeInsets _contentInset;
    double _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    double _totalHeight;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (id)_textBoxView;
- (id)_linkView;
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(_Bool)arg3;
- (void)resetContentInset;
- (void)dealloc;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)_initContentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

