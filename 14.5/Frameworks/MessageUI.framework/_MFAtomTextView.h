//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView
{
    unsigned long long _textStorageEditingDepth;
    MFComposeRecipientTextView *_hostRecipientView;
}

- (void).cxx_destruct;
@property __weak MFComposeRecipientTextView *hostRecipientView; // @synthesize hostRecipientView=_hostRecipientView;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)_delegateSupportsKeyboardEvents;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (long long)baseWritingDirection;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)batchTextStorageUpdates:(CDUnknownBlockType)arg1;
- (_Bool)isEditingTextStorage;
- (void)enumerateAtomAttachments:(CDUnknownBlockType)arg1;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAtoms:(CDUnknownBlockType)arg1;
- (struct CGRect)convertGlyphRect:(struct CGRect)arg1;
@property(readonly) NSArray *atoms;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

