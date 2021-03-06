//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FooterToolBarView.h"

@protocol CollectionFooterActionTypeDelegate;

__attribute__((visibility("hidden")))
@interface CollectionFooterToolBarView : FooterToolBarView
{
}

- (void)selectAction:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)selectAllAction:(id)arg1;
- (void)addToAction:(id)arg1;
- (void)newCollectionAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)editAction:(id)arg1;
- (void)deleteListAction:(id)arg1;
- (void)cancelListAction:(id)arg1;
- (void)editListAction:(id)arg1;
- (void)loadEditActions;
- (void)loadEditAllActions;
- (_Bool)_shouldUseGlyphForStrings:(id)arg1;
- (void)loadContentActions;
- (void)loadListEditAllActions;
- (void)loadListEditActions;
- (void)loadListActions;
- (void)_udpateContent;

// Remaining properties
@property(nonatomic) __weak id <CollectionFooterActionTypeDelegate> delegate; // @dynamic delegate;

@end

