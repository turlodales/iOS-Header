//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/TTMergeableString.h>

@interface TTMergeableUndoString : TTMergeableString
{
}

- (struct TopoIDRange)insertAttributedString:(id)arg1 after:(struct TopoSubstring *)arg2 before:(struct TopoSubstring *)arg3;
- (void)undeleteSubstrings:(vector_252d7b3a *)arg1;
- (void)deleteSubstrings:(vector_c5c053b6 *)arg1 withCharacterRanges:(vector_7053a16b *)arg2;
- (void)applyUndoCommand:(id)arg1;
- (void)addUndoCommand:(id)arg1;

@end

