//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCEFormulaRewrite_RegionInfo, TSCEFormulaRewrite_Uids;

@interface TSCEFormulaRewrite_RegionMovedInfo : NSObject
{
    TSCEFormulaRewrite_RegionInfo *_srcRegion;
    TSCEFormulaRewrite_RegionInfo *_dstRegion;
    TSCEFormulaRewrite_RegionInfo *_originalSrcRegion;
    struct TSKUIDStruct _finalDstTableUID;
    struct TSKUIDStructMap _srcUidForDstUid;
    struct TSKUIDStructMap _dstUidForSrcUid;
    _Bool _spanningRows;
    _Bool _spanningColumns;
    unsigned int _finalTopRowIndex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned int finalTopRowIndex; // @synthesize finalTopRowIndex=_finalTopRowIndex;
@property(nonatomic) _Bool spanningColumns; // @synthesize spanningColumns=_spanningColumns;
@property(nonatomic) _Bool spanningRows; // @synthesize spanningRows=_spanningRows;
@property(readonly, nonatomic) const struct TSKUIDStructMap *dstUidForSrcUid; // @synthesize dstUidForSrcUid=_dstUidForSrcUid;
@property(readonly, nonatomic) const struct TSKUIDStructMap *srcUidForDstUid; // @synthesize srcUidForDstUid=_srcUidForDstUid;
@property(nonatomic) struct TSKUIDStruct finalDstTableUID; // @synthesize finalDstTableUID=_finalDstTableUID;
@property(retain, nonatomic) TSCEFormulaRewrite_RegionInfo *originalSrcRegion; // @synthesize originalSrcRegion=_originalSrcRegion;
@property(readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *dstRegion; // @synthesize dstRegion=_dstRegion;
@property(readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *srcRegion; // @synthesize srcRegion=_srcRegion;
- (void)saveToMessage:(struct RegionMovedInfoArchive *)arg1;
- (id)initFromMessage:(const struct RegionMovedInfoArchive *)arg1;
- (struct TSKUIDStruct)srcUidForDstUid:(const struct TSKUIDStruct *)arg1;
- (struct TSKUIDStruct)dstUidForSrcUid:(const struct TSKUIDStruct *)arg1;
- (void)unloadIndexes;
- (void)loadIndexesForSrcTable:(id)arg1 srcUidResolver:(id)arg2 dstTable:(id)arg3 dstUidResolver:(id)arg4;
- (void)loadIndexesFromRegions;
- (_Bool)isForDstTable:(const struct TSKUIDStruct *)arg1;
- (_Bool)isForSrcTable:(const struct TSKUIDStruct *)arg1;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcRowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcColumnUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *dstRowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *dstColumnUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *srcRowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *srcColumnUids;
@property(readonly, nonatomic) struct TSKUIDStruct originalSrcCondStyleOwnerUID;
@property(readonly, nonatomic) struct TSKUIDStruct dstCondStyleOwnerUID;
@property(readonly, nonatomic) struct TSKUIDStruct srcCondStyleOwnerUID;
@property(readonly, nonatomic) struct TSKUIDStruct originalSrcTableUID;
@property(readonly, nonatomic) struct TSKUIDStruct dstTableUID;
@property(readonly, nonatomic) struct TSKUIDStruct srcTableUID;
- (id)description;
- (id)initWithSrcTableUID:(const struct TSKUIDStruct *)arg1 srcTract:(const struct TSKUIDStructTract *)arg2 dstTableUID:(const struct TSKUIDStruct *)arg3 destTract:(const struct TSKUIDStructTract *)arg4;

@end

