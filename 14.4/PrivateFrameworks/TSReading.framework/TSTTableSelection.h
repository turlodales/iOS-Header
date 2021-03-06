//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKSelection.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/TSDTextSelection-Protocol.h>

@class NSString, TSTCellRegion;

@interface TSTTableSelection : TSKSelection <NSCopying, TSDTextSelection>
{
    int mSelectionType;
    CDStruct_0441cfb5 mAnchorCellID;
    TSTCellRegion *mCellRegion;
    TSTCellRegion *mBaseRegion;
    CDStruct_0441cfb5 mCursorCellID;
    struct _NSRange mSearchReferenceRange;
}

@property(nonatomic) struct _NSRange searchReferenceRange; // @synthesize searchReferenceRange=mSearchReferenceRange;
@property(readonly, nonatomic) CDStruct_0441cfb5 cursorCellID; // @synthesize cursorCellID=mCursorCellID;
@property(readonly, nonatomic) TSTCellRegion *baseRegion; // @synthesize baseRegion=mBaseRegion;
@property(readonly, nonatomic) CDStruct_0441cfb5 anchorCellID; // @synthesize anchorCellID=mAnchorCellID;
@property(readonly, nonatomic) int selectionType; // @synthesize selectionType=mSelectionType;
@property(readonly, nonatomic) TSTCellRegion *cellRegion; // @synthesize cellRegion=mCellRegion;
@property(readonly, nonatomic) _Bool isAtEndOfLine;
@property(readonly, nonatomic) struct _NSRange range;
- (_Bool)intersectsPartialMergeRangeInTable:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)containsCell:(CDStruct_0441cfb5)arg1;
- (_Bool)containsSelection:(id)arg1;
- (_Bool)areCellsInTheSameRegionInTable:(id)arg1;
- (_Bool)isEqualToSelection:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)remove:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (void)insert:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (void)enumerateSelectedCellsInTable:(id)arg1 withFlags:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateSelectedCellsInTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(_Bool)arg4 suppressWrap:(_Bool)arg5;
- (id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(_Bool)arg4;
- (id)selectionByRemovingCellRange:(CDStruct_5f1f7aa9)arg1 inTable:(id)arg2 withAnchor:(CDStruct_0441cfb5)arg3 cursor:(CDStruct_0441cfb5)arg4 selectionType:(int)arg5;
- (id)selectionByAddingCellRange:(CDStruct_5f1f7aa9)arg1 inTable:(id)arg2 withAnchor:(CDStruct_0441cfb5)arg3 cursor:(CDStruct_0441cfb5)arg4 selectionType:(int)arg5;
- (id)selectionByExtendingWithCellRange:(CDStruct_5f1f7aa9)arg1 inTable:(id)arg2 selectionType:(int)arg3 cursorCell:(CDStruct_0441cfb5)arg4;
- (void)dealloc;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2;
- (id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(CDStruct_79c71658)arg3;
- (id)initWithTableModel:(id)arg1 rowOrColumn:(int)arg2 index:(unsigned int)arg3 count:(unsigned int)arg4;
- (id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned short)arg3;
- (id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3;
- (id)initWithTableModel:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;
- (id)initWithTableModel:(id)arg1 cellID:(CDStruct_0441cfb5)arg2 selectionType:(int)arg3;
- (id)initWithTableModel:(id)arg1 andCellRange:(CDStruct_5f1f7aa9)arg2;
- (id)initWithTableModel:(id)arg1 selectionType:(int)arg2;
- (id)initWithTableModel:(id)arg1 cellRange:(CDStruct_5f1f7aa9)arg2 type:(int)arg3 anchorCellID:(CDStruct_0441cfb5)arg4 cursorCellID:(CDStruct_0441cfb5)arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(CDStruct_0441cfb5)arg3 cursorCellID:(CDStruct_0441cfb5)arg4;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(CDStruct_0441cfb5)arg3 cursorCellID:(CDStruct_0441cfb5)arg4 selectionType:(int)arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(CDStruct_0441cfb5)arg3 cursorCellID:(CDStruct_0441cfb5)arg4 baseRegion:(id)arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(CDStruct_0441cfb5)arg3 cursorCellID:(CDStruct_0441cfb5)arg4 baseRegion:(id)arg5 selectionType:(int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

