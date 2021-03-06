//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDiffableDataSourceSectionController.h>

@class NSArray, NSSet;

@interface _UIDiffableDataSourceSectionControllerInternal : _UIDiffableDataSourceSectionController
{
}

- (void)applySnapshot:(id)arg1 toSection:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(CDUnknownBlockType)arg4;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 customAnimationsProvider:(CDUnknownBlockType)arg3;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)collectionViewDiffableDataSourceSectionController;
- (id)initWithItemRenderers:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSSet *associatedSectionIdentifiers; // @dynamic associatedSectionIdentifiers;
@property(readonly, nonatomic) NSArray *itemRenderers; // @dynamic itemRenderers;

@end

