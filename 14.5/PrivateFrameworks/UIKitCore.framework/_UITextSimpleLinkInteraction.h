//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextItemInteractionInteraction.h>

@class UILongPressGestureRecognizer, UITapGestureRecognizer, _UITextInteractableItem;

__attribute__((visibility("hidden")))
@interface _UITextSimpleLinkInteraction : UITextItemInteractionInteraction
{
    UITapGestureRecognizer *_linkTap;
    UILongPressGestureRecognizer *_highlighter;
    _UITextInteractableItem *_highlightedItem;
}

- (void).cxx_destruct;
- (_Bool)_allowItemInteractions;
- (_Bool)_beginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2 precision:(unsigned long long)arg3;
- (_Bool)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2 precision:(unsigned long long)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)highlight:(id)arg1;
- (void)linkTapped:(id)arg1;
- (id)textLinkInteractableView;
- (id)itemInteractableView;
- (id)gesturesForFailureRequirements;
- (id)init;

@end

